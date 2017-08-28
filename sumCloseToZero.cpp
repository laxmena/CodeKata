#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,i,j,temp,e1,e2;
	vector<int> arr;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	i = 0; j = arr.size()-1;
	int absDiff = INT_MAX,diff;
	while(i<j){
		diff = arr[i]+arr[j];
		if(abs(diff) < absDiff){
			absDiff = abs(diff);
			e1 = arr[i];
			e2 = arr[j]; 
		}
		if(diff<0)
			i++;
		else
			j--;
	}
	cout<<e1<<" "<<e2;
	return 0;
}