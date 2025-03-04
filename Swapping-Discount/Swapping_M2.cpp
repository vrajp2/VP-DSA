#include <iostream>
using namespace std;
// Swapping using (+,-) 
int main (){
	int x,y,z;
	cout << "Enter Value Of X :";
	cin >> x;
	cout << "Enter Value Of Y :";
	cin >> y;

x=x+y;
y=x-y;
x=x-y;
	
	cout << "Value OF X" << x << endl ;
	cout << "Value OF Y" << y ;
 }