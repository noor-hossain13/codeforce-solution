#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int count = 0;
        
        // Count how many of b, c, and d are greater than a
        if (b > a) count++;
        if (c > a) count++;
        if (d > a) count++;
        
        // Output the count for the current test case
        cout << count << endl;
    }
    return 0;
}
