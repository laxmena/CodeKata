#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,temp,i;
	cin>>n;
	vector<int> arr;
	vector<bool> status(n,false);
	for(i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	do{
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}while(next_permutation(arr.begin(), arr.end()) );

	return 0;
}