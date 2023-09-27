#include<iostream>
using namespace std;
void criteria(int num);
main(){
	cout<<"Enter your score: ";
	int score;
	cin>>score;
	criteria(score);
}
void criteria(int num){
	if(num>50){
	cout<<"Pass";
}
	if(num<=50){
	cout<<"Fail";
}
}