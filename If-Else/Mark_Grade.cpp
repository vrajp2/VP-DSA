#include <iostream>
using namespace std;

int main() {
    float percentage;

    cout << "Enter the percentage of the student: ";
    cin >> percentage;

    if (percentage >= 90) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: D" << endl;
    } else if (percentage >= 50) {
        cout << "Grade: E" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}