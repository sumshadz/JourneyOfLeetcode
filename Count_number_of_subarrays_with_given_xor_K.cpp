// Question : https://www.codingninjas.com/studio/problems/subarrays-with-xor-k_6826258?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
// T.C : O(n) or O(n logn)
// S.C : O(n)

#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int n=a.size();
    int subArrays=0,xorsum=0;
    map<int,int> m;
    m[0]=1;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
        if(m.find(xorsum^b)!=m.end()){
            subArrays+=m[xorsum^b];
        }
        m[xorsum]++;
    }
    return subArrays;
}
