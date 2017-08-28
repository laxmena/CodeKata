#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<string> array;
	vector<vector<string> > collection(10);
	int i,n;
	string temp;
	cout<<n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>temp;
		collection[temp[0]-'0'].push_back(temp);
	}
	for(i=0;i<10;i++)
		sort(collection[i].rbegin(),collection[i].rend());
	for(i=9;i>=0;i--){
		for(int j=0;j<collection[i].size();j++){
			cout<<collection[i][j];
		}
	}
	return 0;
}