//Question : https://leetcode.com/problems/two-sum/description/
//T.C : O(n2 + nlogn);
//S.C : O(no. of triplets)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> indices;
        int n=nums.size();
        int j=0,k=0;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    indices.push_back(temp);
                    j++;k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        return indices;
    }
};
