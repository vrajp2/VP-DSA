#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) 
	{
		cout << "Enter the value of [" << i << "] :" ;
        cin >> arr[i];
    }

    int max = arr[0];

    for(int i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }

    cout << "The maximum value is: " << max << endl;

}