#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;  // Read the two integers representing the brothers who arrived on time

    // Since the sum of 1, 2, 3 is 6, the missing brother can be found as:
    int late_brother = 6 - (a + b);

    // Output the number of the brother who was late
    cout << late_brother << endl;

    return 0;
}

