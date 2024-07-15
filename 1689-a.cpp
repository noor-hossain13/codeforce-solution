#include <iostream>
using namespace std;

void find_division(int t, int ratings[]) {
    for (int i = 0; i < t; ++i) {
        int rating = ratings[i];
        if (rating >= 1900) {
            cout << "Division 1" << endl;
        } else if (rating >= 1600) {
            cout << "Division 2" << endl;
        } else if (rating >= 1400) {
            cout << "Division 3" << endl;
        } else {
            cout << "Division 4" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    int ratings[t];
    for (int i = 0; i < t; ++i) {
        cin >> ratings[i];
    }

    find_division(t, ratings);

    return 0;
}

