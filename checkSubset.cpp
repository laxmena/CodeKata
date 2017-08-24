#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1,n2,temp;
	set<int> array1;
	cout<<"Enter array1 size: ";
	cin>>n1;
	while(n1-->0){
		cin>>temp;
		array1.insert(temp);
	}
	cout<<"Enter array2 size: ";
	cin>>n2;
	while(n2-->0){
		cin>>temp;
		if(array1.find(temp) != array1.end())
			array1.erase(temp);
	}
	if(array1.size()>0)
		cout<<"array 1 is not a subset of array2\n";
	else
		cout<<"array 1 is a subset of array2\n";
	return 0;
}