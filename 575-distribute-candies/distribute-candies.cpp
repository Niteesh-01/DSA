class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        for(int i=0;i<candyType.size();i++){
            s.insert(candyType[i]);
        }
        if(s.size() < candyType.size()/2) return s.size();
        else return candyType.size()/2;
    }
};