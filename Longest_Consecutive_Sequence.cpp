//Question : https://leetcode.com/problems/longest-consecutive-sequence/description/

// The code first sorts the input vector using the sort function, which has a time complexity of O(n log n) in the average case. Sorting the vector is necessary to identify consecutive elements efficiently.
// After sorting, the code iterates over the sorted vector once, comparing consecutive elements. This loop has a time complexity of O(n) since it examines each element exactly once.
// Therefore, the overall time complexity of the code is O(n log n) + O(n), which simplifies to O(n log n) in big O notation.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int max=1;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]) continue;
            if(nums[i+1]==nums[i]+1) count++;
            else count=1;
            if(count>max)max=count;
        }
        return max;
    }
};
