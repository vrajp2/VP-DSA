#include<iostream>
using namespace std;
int main(){
	
	for(char i='A';i<='E';i++)
	{
		for(char j=i;j<='E';j++)
		{
			cout << j << " ";
		}
		cout << endl;
		for(char k='A';k<=i;k++)
		{
		cout << "  ";
		}
	}
	
	return 0;
}