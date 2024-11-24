#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int total = 15; // Sum of 1 to 5
    int missing = total - (a + b + c + d);

    cout << missing << endl;

    return 0;
}
