#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int count0 = 0, count1 = 0;

    // Count the number of 0's and 1's
    for (char ch : s) {
        if (ch == '0') count0++;
        else count1++;
    }

    // The result is the absolute difference between count0 and count1
    int result = abs(count0 - count1);
    cout << result << endl;

    return 0;
}

