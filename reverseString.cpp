#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char input[100];
	scanf("%[^\n]s",input);
	for(int i=strlen(input)-1;i>-1;i--)
		printf("%c",input[i]);
	return 0;
}