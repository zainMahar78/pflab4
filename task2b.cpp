#include<iostream>
using namespace std;
void equivalent_in_feet(float inches);
main(){
	cout<<"Enter the measurement in inches: ";
	float inc;
	cin>>inc;
	equivalent_in_feet(inc);
}
void equivalent_in_feet(float inches){
	float feet;
	feet=inches/12;
	cout<<"Equivalent in feet: "<<feet;;
}