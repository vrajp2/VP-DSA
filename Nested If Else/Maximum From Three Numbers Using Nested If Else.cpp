#include <iostream>
using namespace std;
int main (){
	int num1,num2,num3;
	cout << "Enter Number1 , Number2 and Number3 : ";
	cin >> num1 >> num2 >> num3;
	if(num1>num2){
	 	if(num1>num3){
	 		cout << "Number1 is Maximum";
		}
		else{
			cout << "Number3 is Maximum";
		}
	}
	else{
		if(num2>num3){
			cout << "Number2 is Maximum";
		}
		else{
			cout << "Number3 is Maximum";
		}
	 	
	 }	
	return 0;
}
