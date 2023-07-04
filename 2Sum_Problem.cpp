//Question : https://leetcode.com/problems/two-sum/description/
//T.C : O(n) finding an element in an unordered_map can take O(1) in average case
//S.C : O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ind;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(!mp.empty()){
                if(mp.find(target-nums[i])!=mp.end()){
                    ind.push_back(i);
                    ind.push_back(mp[target-nums[i]]);
                }
            }
            mp[nums[i]]=i;
        }
        return ind;
    }
};


// if we just have to say if target can be achieved or not then we can use 2 pointer approach

class Solution {
public:
    String twoSum(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<right){
          int sum=nums[left]+nums[right];
          if(sum==target) return "YES";
          elseif(sum>target)right--;
          else left++
        }
      return "NO";
    }
};
