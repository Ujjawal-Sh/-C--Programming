using namespace std;
#include<iostream>

float my_division(float x, float y){
	if(y==0){
		throw "Cannot divide by 0";
	}
	return (x/y);
}
int main(){
	float x = 20;
	float y = 0;
	float z;
	
	try{
		z = my_division(x,y);
		cout<<z;
	}catch(const char* warning){
		cerr<<warning;
	}
}
