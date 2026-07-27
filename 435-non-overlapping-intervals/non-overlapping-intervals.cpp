class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int start1=a[0][0];
        int end1=a[0][1];
        int count=0;
        for(int i=1;i<a.size();i++){
            int start2=a[i][0];
            int end2=a[i][1];
            if(end1>start2){
                count++;
                end1=min(end1,end2);
            }else{
                start1=start2;
                end1=end2;
            }
        }
        return count;
    }
};