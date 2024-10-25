
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if all elements are already ≤ d
        bool all_below_d = true;
        for (int x : a) {
            if (x > d) {
                all_below_d = false;
                break;
            }
        }

        if (all_below_d) {
            cout << "YES" << endl;
            continue;
        }

        // Find the two smallest elements
        sort(a.begin(), a.end());
        int min1 = a[0];
        int min2 = a[1];

        // Check if their sum is ≤ d
        if (min1 + min2 <= d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
