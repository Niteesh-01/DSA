class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int start1=a[0][0];
        int end1=a[0][1];
        vector<vector<int>> ans;
        for(int i=1;i<a.size();i++){
            int start2=a[i][0];
            int end2=a[i][1];
            if(end1>=start2){
                end1=max(end1,end2);
            }else{
                ans.push_back({start1,end1});
                start1=start2;
                end1=end2;
            }
        }
        ans.push_back({start1,end1});
        return ans;
    }
};