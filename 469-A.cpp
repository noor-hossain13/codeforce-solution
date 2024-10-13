#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;  // Total number of levels
    cin >> n;

    set<int> levels;  // Set to store unique levels that can be passed

    // Input for Little X
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levels.insert(level);  // Add the level to the set
    }

    // Input for Little Y
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levels.insert(level);  // Add the level to the set
    }

    // Check if they can pass all levels
    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
