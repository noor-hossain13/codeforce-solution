#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the two-digit number

        // Separate the digits and calculate the sum
        int sum_of_digits = (n / 10) + (n % 10);

        // Output the result
        cout << sum_of_digits << endl;
    }

    return 0;
}

