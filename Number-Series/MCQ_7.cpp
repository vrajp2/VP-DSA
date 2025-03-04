#include<iostream>
using namespace std;
int main ()
{
	int first_number = 58;
	int second_number = 52;
	
	for(int i = 1;i<=5;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number-=12;
		second_number-=12;
	
	}	
}