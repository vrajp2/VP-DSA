#include<iostream>
using namespace std;
int main(){
	int arrinput;
	cout << "Enter Size Of Array : ";
	cin >> arrinput;
	int arr1[arrinput],arr2[arrinput],sumOfTwoArray[arrinput];
	
	for(int i=0;i<arrinput;i++)
	{
	 	cout << "Enter the arr1[" << i << "] : ";
		cin >> arr1[i];
		cout << "Enter the arr2[" << i << "] : ";
		cin >> arr2[i];
		cout << endl;
	}

	cout << endl;
	
	 for(int i=0;i<arrinput;i++)
	 {
	 	sumOfTwoArray[i] = arr1[i] + arr2[i];
	 	 cout << sumOfTwoArray[i] << "  ";
	 }
	
	
	return 0;
}