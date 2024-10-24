#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, n;
        cin >> a >> b >> n;

        int operations = 0;

        // Perform the operations until one of a or b exceeds n
        while (a <= n && b <= n) {
            if (a < b) {
                a += b;
            } else {
                b += a;
            }
            operations++;
        }

        // Output the number of operations for this test case
        cout << operations << endl;
    }

    return 0;
}

