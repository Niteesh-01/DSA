class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        //now hr key k value ko set me insert kro and if it exist already return false
        for(auto x:m){
            if(s.find(x.second)!=s.end()){ //already exist 
                return false;
            }
            else s.insert(x.second);
        }
        return true;
    }
};