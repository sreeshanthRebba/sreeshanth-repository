#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main(){
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}