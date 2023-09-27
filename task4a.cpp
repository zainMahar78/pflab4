#include<iostream>
using namespace std;
void addition(int num1,int num2);
void subtraction(int num1,int num2);
void division(int num1,int num2);
void multiply(int num1,int num2);
main(){
	cout<<"Enter 1st number: ";
	int n1;
	cin>>n1;
	cout<<"Enter 2nd number: ";
	int n2;
	cin>>n2;
	cout<<"Enter an operator (+, -, *, /): ";
	char op;
	cin>>op;
	if(op=='+'){
	addition(n1,n2);
}
	if(op=='-'){
	subtraction(n1,n2);
}
	if(op=='/'){
	division(n1,n2);
}
	if(op=='*'){
	multiply(n1,n2);
}
	
}
void addition(int num1,int num2){
	int add;
	add=num1+num2;
	cout<<"Sum: "<<add;
}
void subtraction(int num1,int num2){
	int sub;
	sub=num1-num2;
	cout<<"Subtraction: "<<sub;
}
void division(int num1,int num2){
	float div;
	div=num1/num2;
	cout<<"Division: "<<div;
}
void multiply(int num1,int num2){
	float mult;
	mult=num1*num2;
	cout<<"Multiplication: "<<mult;
}
