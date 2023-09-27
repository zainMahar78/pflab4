#include<iostream>
using namespace std;
void payable(string day1,float purchase);
main(){
while(true){
	cout<<"Enter day: ";
	string day;
	cin>>day;
	cout<<"Enter total purchase: ";
	float amount;
	cin>>amount;
	payable(day,amount);
}

}
void payable(string day1, float purchase){
	float discount,payable;
	if(day1=="Sunday"){
	discount=purchase*10/100;
	payable=purchase-discount;
	cout<<"Payable:"<<payable;
}
	if(day1!="Sunday"){
	discount=purchase*5/100;
	payable=purchase-discount;
	cout<<"payable: "<<payable;
}
}