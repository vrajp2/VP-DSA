#include<iostream>
using namespace std;
int main ()
{ 
	int first_number = 3;
	int second_number = 4;
	
	for(int i = 1;i<=10;i++)
	{
		
		cout << first_number << " "<< second_number << " ";
		first_number+=4;
		second_number+=4;
	
	}	
}