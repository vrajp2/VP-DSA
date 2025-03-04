#include<iostream>
using namespace std;
int main ()
{
	int first_number = 36;
	int second_number = 34;
	
	for(int i = 1;i<=5;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number-=6;
		second_number-=6;
	
	}	
}