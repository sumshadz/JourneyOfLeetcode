//Question : https://leetcode.com/problems/reverse-pairs/description/
//T.C : O(2n logn)

class Solution {
public:
void merge(int low,int high, int mid, vector<int>& nums){
vector<int> temp;
int i=low,j=mid+1;
while(i<=mid&&j<=high){
    if(nums[i]<=nums[j]){
        temp.push_back(nums[i]);
        i++;
    }
    else{
        temp.push_back(nums[j]);
        j++;
    }
}
while(i<=mid){
     temp.push_back(nums[i]);
        i++;
}
while(j<=high){
    temp.push_back(nums[j]);
        j++;
}
for(int i=low;i<=high;i++){
    nums[i]=temp[i-low];
}
}
int countReverse(int low,int high, int mid, vector<int>& nums){
    int count=0;
    int j=mid+1;
    for(int i=low;i<=mid;i++){
        while(j<=high&&nums[i]>2*(long long)nums[j]) j++;
        count+=j-(mid+1);
    }
    return count;
}
int mergeSort(int low,int high, vector<int>& nums){
    int ans=0;
    if(low>=high) return ans;
        int mid=(low+high)/2;
        ans+=mergeSort(low,mid,nums);
        ans+=mergeSort(mid+1,high,nums);
        ans+=countReverse(low,high,mid,nums);
        merge(low,high,mid,nums);
        return ans;
    
}
    int reversePairs(vector<int>& nums) {
        return mergeSort(0,nums.size()-1,nums);
    }
};
