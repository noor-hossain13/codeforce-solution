#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the length of the sequence

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // Read the sequence of integers
        }

        int alternating_sum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                alternating_sum += a[i];  // Add if index is even (0-based)
            } else {
                alternating_sum -= a[i];  // Subtract if index is odd (0-based)
            }
        }

        cout << alternating_sum << endl;  // Output the result for this test case
    }

    return 0;
}

