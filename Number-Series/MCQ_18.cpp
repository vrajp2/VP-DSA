#include<iostream>
using namespace std;
int main (){
	
	float abc = 5.2;
	
	for(int i=1;i<=10;i++)
	{
		cout << abc << "  " ;
		abc-=0.4;
	}
	return 0;
}