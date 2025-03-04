#include<iostream>
using namespace std;
int main ()
{
	int first_number = 31;
	int second_number = 29;
	
	for(int i = 1;i<=5;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number-=7;
		second_number-=7;
	
	}	
}