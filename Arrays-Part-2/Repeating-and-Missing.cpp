#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int>result;

	map<int,int>mpp;
	for(int i=0;i<arr.size();i++){
		mpp[arr[i]]++;
	}

	for(auto it:mpp){
		if(it.second>1){
			result.second=it.first;
		}
	}

	for(int i=1;i<=n;i++){
		if(mpp.find(i)==mpp.end()){
			result.first=i;
		}
	}
	return result;
}
