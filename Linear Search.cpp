using namespace std;
#include<iostream>

int lin_search(int a[], int n, int z){
	for(int i=0;i<n;i++){
		if(a[i]==z)
		return i;
	}
	return -1;
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n = sizeof(a)/sizeof(a[0]);
	int result=lin_search(a,n,7);
	
	if(result==-1){
		cout<<"The element is not present in this array";
	}else{
		cout<<"The element is present at index: "<<result;
	}
}
