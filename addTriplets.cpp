#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,i,j,num;
	set<int> store;
	set<int> :: iterator it;
	vector<int> array;
	cout<<"Enter array size: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num;
		array.push_back(num);
		store.insert(num);
	}
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
		if(store.find(array[i]+array[j]) != store.end()){
			cout<<array[i]<<"+"<<array[j]<<"="<<array[i]+array[j]<<endl;
			return 0;
		}
	cout << "No such combination is found";
	return 0;
}