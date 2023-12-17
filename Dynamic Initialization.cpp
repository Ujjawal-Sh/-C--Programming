using namespace std;
#include<iostream>
int main(){
	int a[5];
	cout <<"Enter values in the array";
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"\n";
	cout<<"The values entered by you are:\n";
	for(int i=0;i<5;i++){
		cout <<a[i]<<" ";
	}
	return 0;
}
