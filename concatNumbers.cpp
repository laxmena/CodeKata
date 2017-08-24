#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string val;
	vector<string> values;
	cout<<"Enter the length of the Array: ";
	cin>>n;
	while(n-->0){
		cin>>val;
		values.push_back(val);
	}
	sort(values.rbegin(),values.rend());
	string result = "";
	for(int i=0;i<values.size();i++) result += values[i];
	int l = result.size();
	for(int i=0;i<l;i++){
		cout<<result[i];
		if(i!=l-1 && (l-i-1)%3 == 0) cout<<",";
	}
	return 0;
}