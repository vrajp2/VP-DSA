#include<iostream>
using namespace std;
int main (){
	
	float abc = 1.5;
	
	for(int i=1;i<=10;i++)
	{
		cout << abc << "  ";
		abc += 0.8;
	}
	return 0;
}