class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int n=num.size();
        int carry=0;
        //start adding arr to k as we add on paper
        int i=n-1;
        int sum=0;
        while(i>=0 || k>0 || carry>0){
            int Numdigit;
            if(i>=0) Numdigit=num[i];
            else Numdigit=0;
            int Kdigit=k%10;
            sum=Numdigit + Kdigit +carry;
            ans.push_back(sum%10);
            carry=sum/10;
            if(i>=0) i--;
            k/=10;
        }
        //now reverse the ans as we start add and push it into ans
        reverse(ans.begin(),ans.end());
        return ans;
    }
};