#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int position;

    cout << "Enter the position to find the Fibonacci number: ";
    cin >> position;

    if (position < 0) {
        cout << "Please enter a non-negative integer!" << endl;
        return 1;
    }

    int result = fibonacci(position);

    cout << "Fibonacci number at position " << position << " is: " << result << endl;

    return 0;
}
