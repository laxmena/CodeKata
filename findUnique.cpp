#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> numbers;
	int n,elem,result = 0;
	cin>>n;
	while(n-->0){
		cin>>elem;
		if(numbers.find(elem) != numbers.end()) result -= elem;
		else result += elem;
		numbers.insert(elem);
	}
	cout<<result;
	return 0;
}