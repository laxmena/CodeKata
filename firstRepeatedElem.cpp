#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,elem;
	set<int> numSet;
	cout<<"Enter number of elements: ";
	cin>>n;
	while(n--){
		cin>>elem;
		if(numSet.find(elem) != numSet.end()){
			cout<<"First repeated element: "<<elem;
			return 0;
		}
		numSet.insert(elem);
	}
	cout<<"No repeated elements";
	return 0;
}