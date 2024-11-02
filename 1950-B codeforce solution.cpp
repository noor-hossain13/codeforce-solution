#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < 2 * n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
                // Determine whether the current 2x2 block should start with '#' or '.'
                if (((i / 2) + (j / 2)) % 2 == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }

    return 0;
}
