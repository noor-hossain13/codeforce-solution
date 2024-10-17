#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[4];
    // Input the four numbers
    for (int i = 0; i < 4; ++i) {
        cin >> x[i];
    }

    // Sort the array to easily identify the largest number (a + b + c)
    sort(x, x + 4);

    // The largest number is a + b + c
    int a = x[3] - x[2]; // a = S - (b + c)
    int b = x[3] - x[1]; // b = S - (a + c)
    int c = x[3] - x[0]; // c = S - (a + b)

    // Output the guessed integers a, b, and c
    cout << a << " " << b << " " << c << endl;

    return 0;
}

