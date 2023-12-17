using namespace std;
#include<iostream>
int main(){
	int a = 20;
	int b = 30;
	int c = 50;
	
	if(a>b){
		if(a>c){
			cout <<"A is the greatest";
		}
	}
	else{
		if(b>c){
			cout<< "B is the greatest";
		}else{
			cout<< "C is the greatest";
		}
	}
}
