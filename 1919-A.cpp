#include <iostream>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;  // Input number of coins in Alice's and Bob's wallets

        // If the sum of coins is odd, Alice wins; otherwise, Bob wins
        if ((a + b) % 2 == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}

