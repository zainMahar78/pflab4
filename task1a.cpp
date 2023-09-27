#include<iostream>
using namespace std;
void calculate_fuel(float distance);
main(){
	cout<<"Enter the distance: ";
	float dis;
	cin>>dis;
	calculate_fuel(dis);
}
void calculate_fuel(float distance){
	float fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;
}
