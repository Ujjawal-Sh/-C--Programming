using namespace std;
#include<iostream>
#include<cstring>
int main(){
	char c1[] = "Hello";
	char c2[] = "World";
	cout <<"concatenation: "<<strcat(c1,c2);
	cout <<"\nCopy:"<<strcpy(c1,c2);
	cout <<strlen(c1);
	return 0;
}
