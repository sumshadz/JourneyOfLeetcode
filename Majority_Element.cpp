//Solution 1
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int> m;
       for(int i=0;i<nums.size();i++){
           m[nums[i]]++;
       }
       for(auto i:m){
           if (i.second>nums.size()/2) return i.first;
       } 
       return 1;
    }
};

//Solution 2 : Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0;
       int candidate = 0;
       for(int i=0;i<nums.size();i++){
           if(count==0){
            candidate = nums[i];
            count=1;
           }
           else{
            if(nums[i]==candidate) count++;
            else count--; 
           }
       }
       return candidate;
    }
};
