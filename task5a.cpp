#include<iostream>
using namespace std;
void vote(int age);
main(){
	cout<<"Enter your age: ";
	int age;
	cin>>age;
	vote(age);
}
void vote(int age){
	if(age>=18){
	cout<<"You are eligible to vote.";
}
	if(age<18){
	cout<<"You are not eligible to vote.";
}
}