#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,temp;
	cin>>n>>k;
	assert(n>0);
	assert(k<=n);
	vector<int> heights;
	while(n-->0){
		cin>>temp;
		heights.push_back(temp);
	}
	sort(heights.begin(),heights.end());
	cout<<heights[k-1]<<endl;
	return 0;
}