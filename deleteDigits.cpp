#include <bits/stdc++.h>

using namespace std;

int findMinimum(int num, int digits){
	vector<int> splitArr;
	int pos = 0;
	while(num>0){
		splitArr.push_back(num % 10);
		num /= 10;
		pos++;
	}
	sort(splitArr.begin(), splitArr.end());

	int resultLen = splitArr.size()-digits;

	if(resultLen < 1) return 0;

	pos = 0; num = 0;
	while(resultLen){
		num = num*10 + splitArr[pos];
		pos++;
		resultLen--;
	}
	return num;
}

int main(){
	int num,digits;
	cout<<"Enter input Number: ";
	cin>>num;
	assert(num>-1);
	cout<<"Enter number of digits to remove: ";
	cin>>digits;
	assert(digits>-1);
	cout<<findMinimum(num,digits)<<endl;
	return 0;
}