class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0; //else
        }
        digits.insert(digits.begin(),1); //it will executed and add 1 to the begnning of the digits when all digits of digit is 9
        return digits;
    }
};