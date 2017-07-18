#include <iostream>
#include <cstdio>
#include <vector>

#define ll long long

using namespace std;

vector<ll> fact;

ll findFact(int n){
	if(fact.size() >= n)
		return fact[n];
	for(int i=fact.size(); i<=n;i++){
		fact.push_back(fact[i-1]*i);
	}
	return fact[n];
}

int main(){
	int n;
	fact.push_back(1);
	scanf("%d",&n);
	printf("%lld",findFact(n));
	return 0;
}