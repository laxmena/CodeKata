#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<string> bucket;
	int n,minStr = INT_MAX;
	string temp;

	cout<<"enter number of strings: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp.size() < minStr)
			minStr = temp.size();
		bucket.push_back(temp);
	}

	int prefixLen = 0;
	for(int i=0;i<minStr;i++){
		for(int j=0;j<bucket.size()-1;j++){
			if(bucket[j][i] != bucket[j+1][i]){
				if(prefixLen == 0) cout<<"No Common Prefix found";
				cout<<bucket[0].substr(0,prefixLen)<<endl;
				return 0;
			}
		}
		prefixLen++;
	}
	cout<<bucket[0]<<endl;
	return 0;
}