#include<iostream>
using namespace std;
void y(string name);
main(){
	cout<<"Enter the name: ";
	string name;
	cin>>name;
	y(name);
}
void y(string name){
	while(true){
	cout<<name;
}
}