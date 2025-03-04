#include <iostream>
using namespace std;

int main() {
    cout << "Leap years between 2000 and 3000 are: " << endl;
    
    for (int year = 2000; year <= 3000; year++) {
    	
        if (year % 4 == 0 )
		 {
            cout << year << " ";
        }
    }
    return 0;
}
