#include<iostream>
using namespace std;
void evenOrOdd(int n);
main(){
	cout<<"Enter a number: ";
	int num;
	cin>>num;
	evenOrOdd(num);
}
void evenOrOdd(int n){
	if(n%2==0){
	cout<<"Number "<<n<<" is even";
}
	if(n%2!=0){
	cout<<"Number "<<n<<" is odd";
}
}