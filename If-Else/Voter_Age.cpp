#include<iostream>
using namespace std;

int main(){
	int age;
	cout << "Enter Your Age :- ";
	cin >> age;
	
	if(age > 100 || age == 0 ){
		cout << "Enter Valid Age..";
	}
	else if (age<0)
	{
		cout << "Enter Positive Value..";
	}
	else if (age>=18){
		cout << "You Are Eligible For Voting..";
	}
	else
	{
		cout << "You Are Not Eligible For Voting";
	}
}