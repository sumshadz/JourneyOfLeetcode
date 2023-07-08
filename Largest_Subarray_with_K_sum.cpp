// Question : https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int maxLen=0,sum=0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){maxLen=max(maxLen,i+1);}
            if(!m.empty()&&m.find(sum)!=m.end()){
                int len=i-m[sum];
                maxLen=max(maxLen,len);
                m[sum]=min(m[sum],i);
            }
            else m[sum]=i;
        }
        return maxLen;
    }
};
