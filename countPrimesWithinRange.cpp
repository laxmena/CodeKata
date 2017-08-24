#include <bits/stdc++.h>

using namespace std;

int main(){
	int start,end,i,j,count;
	cout<<"Enter range(Start and End (inclusive)): ";
	cin>>start>>end;
	vector<bool> sieve(end+1,true);
	count = 0;
	for(i=2;i<end+1;i++){
		if(sieve[i]){
			if(i >= start) count++;
			for(j=i*i;j<end+1;j+=i)
				sieve[j] = false;
		}
	}
	cout<<count;
	return 0;
}