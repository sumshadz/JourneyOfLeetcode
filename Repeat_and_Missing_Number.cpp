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
