class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int currSum=0,acctualSum=0;

        int n=grid.size();
        int x=n*n;
        acctualSum=(x*(x+1))/2;

        int repeating=-1,missing=-1;
        unordered_set<int> s;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                currSum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()) repeating=grid[i][j];
                s.insert(grid[i][j]);
            }
        }
        currSum-=repeating;
        missing=acctualSum-currSum;

        return {repeating,missing};
    }
};