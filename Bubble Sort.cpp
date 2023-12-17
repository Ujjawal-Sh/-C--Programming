using namespace std;
#include<iostream>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubble_sort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	cout<<"Initail Values are:";
	int a[] = {5,4,3,2,1};
	for(int i=0;i<5;i++){
		cout<<a[i]<<" "<<"\n";
          }
	int n = sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n);
	
	cout<<"\n"<<"After using Bubble sort:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
