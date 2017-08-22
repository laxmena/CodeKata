#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,reg,count;
	scanf("%d",&n);
	set<int> regNum;
	count = 0;
	while(n-->0){
		scanf("%d",&reg);
		if(regNum.find(reg) == regNum.end()) 
			regNum.insert(reg);
		else
			count++;
	}
	cout<<count;
	return 0;	
}