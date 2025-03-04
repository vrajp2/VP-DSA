#include<iostream>
using namespace std;
int main (){
	
	int abc =8;

	for(int i=1;i<=10;i++)
	{
		cout << abc << "  ";
		abc = abc * i - (i+1);
	}
	return 0;
}