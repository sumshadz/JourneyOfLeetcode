//https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	map<int,int> m;
	pair<int,int> ans;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(int i=1;i<n+1;i++){
		if(m[i]==0) ans.first=i;
		if(m[i]==2) ans.second=i;
	}
	return ans;
}


// optimized approach with T.C = O(n) and S.C = O(1)

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n1)
{
	// x-y=s-sn
	//(x-y)(x+y)=s2-s2n ==> x+y=(s2-s2n)/(x-y)
	// we are using long long becase overflow may happen
	long long n=(long long)n1;
	long long sn=(n*(n+1))/2;
	long long sn2=(n*(n+1)*(2*n+1))/6;
	long long s=0,s2=0;
	for(int i=0;i<n;i++){
		s+=(long long)arr[i];
		s2+=(long long)arr[i]*(long long)arr[i];
	}
	long long diff=s-sn; //x-y
	long long sum=(s2-sn2)/diff; 
	long long x=(sum+diff)/2;
	long long y= x-diff;
	return {(int)y,(int)x};
	
}
