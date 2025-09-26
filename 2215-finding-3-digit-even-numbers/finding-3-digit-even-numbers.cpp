class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        unordered_map<int,int> m;
        //insert all ele of arr in map with freq
        for(auto ele:arr){
            m[ele]++;
        }
        //now check from 100 to 999
        for(int i=100;i<=999;i=i+2){
            int x=i;
            int a=x%10;
            x/=10;
            int b=x%10;
            x/=10;
            int c=x%10; //or c=x
            if(m.find(a)!=m.end()){ //a mil gya
                m[a]--;
                if(m[a]==0) m.erase(a);
                if(m.find(b)!=m.end()){
                    m[b]--;
                    if(m[b]==0) m.erase(b);
                    if(m.find(c)!=m.end()) ans.push_back(i);
                    m[b]++;
                }
                m[a]++;
            } 
        }
        return ans;








        // unordered_set<int> s;
        // //insert all ele of arr in set
        // for(auto ele:arr){
        //     s.insert(ele);
        // }
        // //now check from 100 to 999
        // for(int i=100;i<=999;i=i+2){
        //     int x=i;
        //     int a=x%10;
        //     x/=10;
        //     int b=x%10;
        //     x/=10;
        //     int c=x%10; //or c=x
        //     if(s.find(a)!=s.end()){ //a mil gya
        //         s.erase(a);
        //         if(s.find(b)!=s.end()){
        //             s.erase(b);
        //             if(s.find(c)!=s.end()) ans.push_back(i);
        //             s.insert(b);
        //         }
        //         s.insert(a);
        //     } 
        // }
        // return ans; //above logic will fail when there is repeating ele in arr like [2,2,8,8,2] bcoz set stores unique ele so it is better to use map here to store frequencies of each ele
    }
};