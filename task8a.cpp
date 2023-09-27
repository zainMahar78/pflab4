#include<iostream>
using namespace std;
void payable_amount(string day,float purchase);
main(){
	cout<<"Enter the day of purchase: ";
	string day;
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	float purchase_amount;
	cin>>purchase_amount;
	payable_amount(day,purchase_amount);
}
void payable_amount(string day,float purchase){
	float discount;
if(day=="Sunday"){
	discount=purchase*10/100;
	float payable_amount=purchase-discount;
	cout<<"Payable Amount: $"<<payable_amount;
}
if(day!="Sunday"){
	cout<<"Payable Amount: $"<<purchase;
}
}