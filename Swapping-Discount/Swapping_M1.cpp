#include <iostream>
using namespace std;
// Swapping using third variable 
int main (){
	int x,y,z;
	cout << "Enter Value Of X :";
	cin >> x;
	cout << "Enter Value Of Y :";
	cin >> y;
		
	z=x;
	x=y;
	y=z;
	
	cout << "Value OF X" << x << endl ;
	cout << "Value OF Y" << y ;
 }