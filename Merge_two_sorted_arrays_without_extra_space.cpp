class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=n+m-1,i=m-1,j=n-1;
         while(i>=0&&j>=0){
             if(nums1[i]>nums2[j]){
                 nums1[l]=nums1[i];
                 i--;l--;
             }
             else {
                 nums1[l]=nums2[j];
                 j--;l--;
             }
         }
         while(j>=0){
             nums1[l]=nums2[j];
                 j--;l--;
         }
    }
};
