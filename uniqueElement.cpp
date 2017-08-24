#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> store;
	int n,temp;
	cout<<"Size of array: ";
	cin>>n;
	cout<<"Enter elements: ";
	while(n-->0){
		cin>>temp;
		if(store.find(temp) == store.end()) store.insert(temp);
		else store.erase(temp);
	}

	set<int> :: iterator it = store.begin();
	cout<<*it<<endl;
	return 0;
}