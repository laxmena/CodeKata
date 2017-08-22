#include <bits/stdc++.h>

using namespace std;

void checkIndexAndVal(vector<int> array){
	for(int i=0;i<array.size();i++){
		if(i==array[i]){
			cout<<"The number "<<i<<" equals its index "<<i<<endl;
			return;
		}
	}
	cout<<"No such numbers :("<<endl;
}

int main(){
	int n,elem;
	vector<int> numArray;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	while(n-->0){
		cin>>elem;
		numArray.push_back(elem);
	}
	checkIndexAndVal(numArray);
	return 0;
}