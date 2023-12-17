using namespace std;
#include<fstream>
#include<iostream>

int main(){
	
//Output Read File:	
	
	ofstream MyFile("abcd.txt");
	
	MyFile<<"This is sparta!";
	MyFile.close();
	
//Input Read File:
	
string myText;
ifstream MyReadFile("abcd.txt");
while(getline(MyReadFile,myText))

     cout<<myText;
}
