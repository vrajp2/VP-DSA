#include<iostream>
using namespace std;
int main (){
	int fn = 80;
	int sn=10;
	
	for(int i=1;i<=10;i++)
	{
		cout << fn << "  " << sn << "  ";
		fn-=10;
		sn+=5;
		
	}
	return 0;
}