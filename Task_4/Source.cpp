#include <iostream>
using namespace std;

void printNaturalNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNaturalNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 1;
    }

    cout << "The first " << N << " natural numbers are: ";
    printNaturalNumbers(N);
    cout << endl;

    return 0;
}
