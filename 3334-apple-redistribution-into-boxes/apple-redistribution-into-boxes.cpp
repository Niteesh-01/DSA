class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int sum=0;
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        int count=0 , j=capacity.size()-1;
        while(sum>0){
            sum-=capacity[j--];
            count++;
        }
        return count;
    }
};