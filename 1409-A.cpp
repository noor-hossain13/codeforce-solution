#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // Calculate the absolute difference between a and b
        int diff = abs(b - a);

        // Minimum moves to cover the difference
        int moves = diff / 10;  // Full moves of size 10
        if (diff % 10 != 0) {
            moves++;  // Add one more move if there's a remainder
        }

        cout << moves << endl;
    }

    return 0;
}
