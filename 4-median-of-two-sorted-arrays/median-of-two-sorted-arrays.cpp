class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int n=nums1.size()+nums2.size();
        // int count=0;
        // if(n%2==0){
        //     int x=n/2 -1;
        //     int i=0,j=0;
        //     double e1=-1,e2=-1;
        //     while(i<nums1.size() && j<nums2.size()){
        //         if(count==x) {
        //             if(nums1[i]<nums2[j]){
        //                 e1=nums1[i];
        //                 i++;
        //             }
        //             e2=min(nums1[i],nums2[j]);

        //             return (e1+e2)/2.0;
        //         }
        //         else if(nums1[i]<nums2[j]){
        //             i++;
        //             count++;
        //         }
        //         else{
        //             j++;
        //             count++;
        //         }
        //     }

        //     while(i<nums1.size()){
        //         if(count==x){
        //             e1=nums1[i];
        //             e2=nums1[i+1];
        //             return (e1+e2)/2.0;
        //         }
        //         else{
        //             i++;
        //             count++;
        //         }
        //     }
        //     while(j<nums2.size()){
        //         if(count==x){
        //             e1=nums2[j];
        //             e2=nums2[j+1];
        //             return (e1+e2)/2.0;
        //         }
        //         else{
        //             j++;
        //             count++;
        //         }
        //     }
        // }

        // else{
        //     int x=n/2;
        //     int i=0,j=0;
        //     while(i<nums1.size() && j<nums2.size()){
        //         if(count==x) {
        //             return min(nums1[i],nums2[j]);
        //         }
        //         else if(nums1[i]<nums2[j]){
        //             i++;
        //             count++;
        //         }
        //         else{
        //             j++;
        //             count++;
        //         }
        //     }

        //     while(i<nums1.size()){
        //         if(count==x){
        //             return nums1[i];
        //         }
        //         else{
        //             i++;
        //             count++;
        //         }
        //     }
        //     while(j<nums2.size()){
        //         if(count==x){
        //             return nums2[j];
        //         }
        //         else{
        //             j++;
        //             count++;
        //         }
        //     }
        // }
        // return -1;

        int m = nums1.size();
        int n = nums2.size();
        int size = m+n;
        
        int idx1 = (size/2)-1;
        int element1 = -1;
        int idx2 = size/2;
        int element2 = -1;
        
        int i = 0, j = 0, k = 0;
        
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                if(k == idx1) {
                    element1 = nums1[i];
                }
                if(k == idx2) {
                    element2 = nums1[i];
                }
                i++;
            } else {
                if(k == idx1) {
                    element1 = nums2[j];
                }
                if(k == idx2) {
                    element2 = nums2[j];
                }
                j++;
            }
            k++;
        }
        
        while(i < m) {
            if(k == idx1) {
                element1 = nums1[i];
            }
            if(k == idx2) {
                element2 = nums1[i];
            }
            i++;
            k++;
        }
        
        while(j < n) {
            if(k == idx1) {
                element1 = nums2[j];
            }
            if(k == idx2) {
                element2 = nums2[j];
            }
            j++;
            k++;
        }

        if(size%2 == 1)
            return element2;
        
        return (element1 + element2)/2.0;
    }
};