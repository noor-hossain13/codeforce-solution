#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the string
        string s; // Input string
        cin >> n >> s;

        int deletions = 0;

        // Traverse the string and check for "pie" or "map"
        for (int i = 0; i <= n - 3; i++) {
            if (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map") {
                deletions ++ ; // We need to remove 2 characters to break the sequence
                i += 2; // Skip the next two characters since we broke this occurrence
            }
        }

        // Output the result for this test case
        cout << deletions << endl;
    }

    return 0;
}

