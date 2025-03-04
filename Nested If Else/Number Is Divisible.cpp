#include <iostream>
using namespace std;
int main(){
	int number,divisibleByNo;
	cout << "Enter your Number : ";
	cin >> number;
	cout << "Enter a number you want to divisible by the entered number : ";
	cin >> divisibleByNo;
	
	if(number%divisibleByNo==0){
		cout << number << " is Divisible By : " << divisibleByNo ;
	}
	else{
		cout << number << " is not Divisible By : " << divisibleByNo;
	}
	
	return 0;
}
