#include<iostream>
using namespace std;

int main()
{
	int amount,Discount;
	
	cout << "Enter You Amount :";
	cin >> amount;
	
	if(amount>0 && amount<=1000){
		Discount=(amount*5)/100;
		amount=amount-Discount;
		cout << "This Is Your Payable Amount :" << amount;
	}
	else if(amount>=1000 && amount<=3000){
		Discount=(amount*10)/100;
		amount=amount-Discount;
		cout << "This Is Your Payable Amount :" << amount;
	}
	else if(amount>=3000 && amount<=7000){
		Discount=(amount*15)/100;
		amount=amount-Discount;
		cout << "This Is Your Payable Amount :" << amount;
	}
	else if(amount>=7000 && amount<=10000){
		Discount=(amount*10)/100;
		amount=amount-Discount;
		cout << "This Is Your Payable Amount :" << amount;
	}
	else
	{	
		Discount=(amount*15)/100;
		amount=amount-Discount;
		cout << "This Is Your Payable Amount :" << amount;
	}
}