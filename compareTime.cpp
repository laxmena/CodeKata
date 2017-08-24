#include <bits/stdc++.h>

using namespace std;

int main(){
	int hrs,min,sec;
	int time1,time2;
	char c;
	cout<<"Enter railway time in Format:\n h:m:s (eg:15:23:59)\n";
	cout<<"Enter Time 1: ";
	cin>>hrs>>c>>min>>c>>sec;
	assert(hrs<24 && hrs>=0);
	assert(min<61 && min>=0);
	assert(sec<61 && sec>=0);
	time1 = hrs*60*60 + min*60 + sec;
	cout<<"Enter Time 2: ";
	cin>>hrs>>c>>min>>c>>sec;
	assert(hrs<24 && hrs>=0);
	assert(min<61 && min>=0);
	assert(sec<61 && sec>=0);
	time2 = hrs*60*60 + min*60 + sec;
	if(time1 == time2)
		cout<<"Both the Times are Equal\n";
	else if(time1 < time2)
		cout<<"Time1 is minimum\n";
	else
		cout<<"Time2 is minimum\n";
	return 0;
}