using namespace std;
#include<iostream>
int main(){
	string name = "Ujjawal Sharma";
	
	string *ptr = &name;
	
	cout<<"value in variable:"<<name;
	cout<<"\n\n";
	
	cout<<"Address of variable:"<<&ptr;
	cout<<"\n\n";
	
	cout<<"Address of variable:"<<&name;
	return 0;
}
