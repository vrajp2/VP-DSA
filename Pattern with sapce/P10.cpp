#include<iostream>
using namespace std;
int main(){
	
	for(int i=5;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout << j << " ";
		}
		cout << endl;
		for(int k=5-i;k>=0;k--)
		{
		cout << "  ";
		}
	}
	
	return 0;
}