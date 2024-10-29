
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        // Check if we can choose x = l and y = 2 * l within the range
        if (2 * l <= r) {
            cout << l << " " << 2 * l << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}
