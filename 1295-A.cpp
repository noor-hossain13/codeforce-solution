#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Number of elements in the array

        int odd_count = 0, even_count = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;

            if (x % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        // Condition to check for odd sum
        if (sum % 2 != 0) {
            cout << "YES" << endl;
        } else if (odd_count > 0 && even_count > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

