#include<iostream>
using namespace std;
void howManyStickers(int n);
main(){
	cout<<"Enter the side length of the Rubik's Cube: ";
	int side_length;
	cin>>side_length;
	howManyStickers(side_length);
}
void howManyStickers(int n){
	int no_stickers=n*n*6;
	cout<<"Number of stickers needed: "<<no_stickers;
}
