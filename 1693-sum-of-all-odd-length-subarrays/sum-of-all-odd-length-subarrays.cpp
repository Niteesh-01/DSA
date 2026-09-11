class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }

        int x=3;
        while(x<=arr.size()){
            int i=0,j=x;
            int temp=0;
            for(int k=i;k<j;k++){
                temp+=arr[k];
            }
            sum+=temp;
            while(j<arr.size()){
                temp=temp+arr[j]-arr[i];
                sum+=temp;
                i++;
                j++;
            }
            x+=2;
        }
        return sum;
    }
};