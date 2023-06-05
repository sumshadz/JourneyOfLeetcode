class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        stack<int> s;
        for(auto x:nums){
            if(s.empty()) s.push(x);
            else{
                if(s.top()==x) return x;
                s.push(x);
            }
        }
        return 0;
    }
};
