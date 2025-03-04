#include<iostream>
using namespace std;
int main(){
	int arrinput;
	cout << "Enter Size Of Array : ";
	cin >> arrinput;
	int arr[arrinput];
	
	for(int i=0;i<arrinput;i++)
	{
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<arrinput;i++)
	 {
	 	cout << arr[i] << endl;
	 }
	 
	
	return 0;
}