#include<iostream>
using namespace std;
void calculate_fuel(float distance);
main(){
	cout<<"Enter the distance: ";
	float dist;
	cin>>dist;
	calculate_fuel(dist);
}
void calculate_fuel(float distance){
	float fuel=distance*10;
	if(distance>100){
	cout<<"Fuel needed: "<<fuel;
}
	if(distance<=100){
	cout<<"Fuel needed: "<<100;
}
}