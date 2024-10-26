#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> strengths(n);
        for (int i = 0; i < n; ++i) {
            cin >> strengths[i];
        }

        // Find the maximum value (max1)
        int max1 = *max_element(strengths.begin(), strengths.end());

        // Check if all values are the same
        bool allSame = all_of(strengths.begin(), strengths.end(), [max1](int x) { return x == max1; });

        if (allSame) {
            // If all values are the same, each result should be 0
            for (int i = 0; i < n; ++i) {
                cout << 0 << " ";
            }
            cout << endl;
            continue;
        }

        // Find the second maximum (max2)
        int max2 = INT_MIN;
        for (int i = 0; i < n; ++i) {
            if (strengths[i] != max1) {
                max2 = max(max2, strengths[i]);
            }
        }

        // Output results
        for (int i = 0; i < n; ++i) {
            if (strengths[i] == max1) {
                cout << strengths[i] - max2 << " ";
            } else {
                cout << strengths[i] - max1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
