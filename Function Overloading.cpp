using namespace std;
#include<iostream>
int add(int x, int y){
	return x+y;
          }
double add(double x, double y){
	return x+y;
	}
	int main(){
	
	cout <<"Add int:"<<add(100,30);
	cout <<"\nAdd double:"<<add(3.12,8.32);
	return 0;
}
