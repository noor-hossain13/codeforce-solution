#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, k; // n = number of people, k = threshold to take gold
        cin >> n >> k;

        vector<int> a(n); // Array to store gold amounts of each person
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int robinGold = 0; // Robin starts with 0 gold
        int peopleGivenGold = 0; // Counter for people given gold

        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) {
                robinGold += a[i]; // Robin takes the gold if it's >= k
            } else if (a[i] == 0 && robinGold > 0) {
                ++peopleGivenGold; // Robin gives 1 gold
                --robinGold; // Robin's gold decreases by 1
            }
        }

        cout << peopleGivenGold << endl; // Output the result for the test case
    }

    return 0;
}
