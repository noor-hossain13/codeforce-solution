#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int min_sticks = min(n, m);

    if (min_sticks % 2 == 1) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }

    return 0;
}
