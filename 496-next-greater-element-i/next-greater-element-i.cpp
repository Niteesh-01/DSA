class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> m;
        for(int i=nums2.size()-1;i>=0;i--){
            while(s.size()>0 && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]]=-1;  //means next greater of the number is not exist
            }
            else{ // s.top()>nums[i]
                m[nums2[i]]=s.top();  // s.top nums[i] ka next greater h 
            }
            s.push(nums2[i]);
        }

        //now map them -> this can be done in above loop
        // unordered_map<int,int> m;
        // for(int i=0;i<nums2.size();i++){
        //     m[nums2[i]]=nextG[i];
        // }
        
        //map kr liya ab nums1 ke ele ko map me search kro ar us se map ki hui value ko ans me push kro
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};