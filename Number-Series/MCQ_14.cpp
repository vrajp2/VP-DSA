#include<iostream>
using namespace std;
int main (){
	
	int abc = 201;
	
	for(int i=1;i<=10;i++)
	{
		cout << abc << "  ";
		abc += i;
	}
	return 0;
}