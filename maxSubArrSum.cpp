#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,temp,i;
	cin>>n;
	vector<int> arr;
	for(i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	int subSum = INT_MIN;
	int sum = 0;
	int start,end,resultStart;

	for(i=0;i<n;i++){
		if(sum == 0)
			start = i;
		
		sum += arr[i];

		if(sum<0)
			sum=0;
		
		if(sum>subSum){
			subSum = sum;
			resultStart = start;
			end = i;
		}
	}

	for(int i=resultStart;i<=end;i++)
		cout<<arr[i]<<" ";
	return 0;
}