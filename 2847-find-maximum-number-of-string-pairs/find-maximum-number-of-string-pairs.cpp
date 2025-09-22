class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n=arr.size();
        int count=0;
        // unordered_set<string> s;
        // for(int i=0;i<n;i++){
        //     s.insert(arr[i]);
        // }
        // //a loop for rev arr ele and check 
        // for(int i=0;i<n;i++){
        //     string rev=arr[i];
        //     reverse(rev.begin(),rev.end());
        //     if(rev==arr[i]) continue; //leave and proceed
        //     //now find if this rev exist in set or not
        //     if(s.find(rev)!=s.end()){ //count++ and erase it
        //         count++;
        //         s.erase(arr[i]);
        //     }
        // }
        for(int i=0;i<n-1;i++){
            string rev=arr[i];
            reverse(rev.begin(),rev.end());
            for(int j=i+1;j<n;j++){
                if(rev==arr[j]) count++;
            }
            //this approach takes O(n^2) we can done it by using sets 
        }
        return count;
    }
};