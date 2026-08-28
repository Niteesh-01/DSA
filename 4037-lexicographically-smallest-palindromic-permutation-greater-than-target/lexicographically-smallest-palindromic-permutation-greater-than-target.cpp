class Solution {
public:

    string f(const vector<int>& arr, int midch) {
        string ans = "";
        for (int i = 0; i < arr.size(); i++) {
            ans += char(arr[i] + 'a');
        }
        if (midch != -1) { // only if mid is not -1
            ans += char(midch + 'a');
        }
        for (int i = (int)arr.size() - 1; i >= 0; i--) {
            ans += char(arr[i] + 'a');
        }
        return ans;
    }
    
    string lexPalindromicPermutation(string s, string target) {
        int n = target.size();
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int oddch = -1;
        for (int i = 0; i < 26; i++) {
            if ((freq[i] & 1)) {
                if (oddch != -1) return ""; 
                oddch = i;
            }
        }

        vector<int> freqhalf(26, 0);
        for (int i = 0; i < 26; i++) {
            freqhalf[i] = freq[i] / 2;
        }

        // Case 1: Trying to match left half of the target exactly
        vector<int> left(n / 2);
        vector<int> lefthalf = freqhalf;
        bool ok = true;
        for (int i = 0; i < n / 2; i++) {
            int c = target[i] - 'a';
            if (lefthalf[c] > 0) {
                left[i] = c;
                lefthalf[c]--;
            } else {
                ok = false;
                break;
            }
        }
        if (ok) {
            string final_str = f(left, oddch);
            if (final_str > target) return final_str;
        }

        // Case 2: Trying to build next greater from rightmost possible mismatch index of lefthalf 
        for (int i = n / 2 - 1; i >= 0; i--) {
            vector<int> lefthalf1 = freqhalf;
            vector<int> left1(n / 2);
            bool flag = true;

            for (int j = 0; j < i; j++) { 
                int c = target[j] - 'a';
                if (lefthalf1[c] > 0) {
                    left1[j] = c;
                    lefthalf1[c]--;
                } else {
                    flag = false;
                    break;
                }
            }
            if (!flag) continue;

            // Try to place a strictly larger character at the i-th index
            int targetC = target[i] - 'a';
            bool found = false;
            for (int c = targetC + 1; c < 26; c++) {
                if (lefthalf1[c] > 0) {
                    left1[i] = c;
                    lefthalf1[c]--;
                    found = true;
                    break;
                }
            }
            if (!found) continue;

            for (int k = i + 1; k < n / 2; k++) {
                for (int c = 0; c < 26; c++) {
                    if (lefthalf1[c] > 0) {
                        left1[k] = c;
                        lefthalf1[c]--;
                        break;
                    }
                }
            }
            string final1 = f(left1, oddch);
            return final1;
        }

        return "";
    }
};