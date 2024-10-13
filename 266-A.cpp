#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int removals = 0;

    // Loop through the string and compare each stone with the next one
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            removals++;  // Increment removals if two consecutive stones are the same
        }
    }

    cout << removals << endl;
    return 0;
}

