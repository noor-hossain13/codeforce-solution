
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int bills[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        count += n / bills[i];  // Calculate how many bills of this denomination are needed
        n %= bills[i];          // Reduce the amount by the equivalent value
    }

    cout << count << endl;
    return 0;
}
