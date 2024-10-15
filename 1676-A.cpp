#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        string ticket;
        cin >> ticket;
        
        // Extract the first three digits and the last three digits
        int sum1 = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        int sum2 = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');
        
        // Compare the sums
        if (sum1 == sum2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
