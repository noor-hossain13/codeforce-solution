#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string position;
        cin >> position;

        char column = position[0];
        char row = position[1];

        vector<string> moves;

        // Horizontal moves (same row, different columns)
        for (char c = 'a'; c <= 'h'; c++) {
            if (c != column) {
                moves.push_back(string(1, c) + row);
            }
        }

        // Vertical moves (same column, different rows)
        for (char r = '1'; r <= '8'; r++) {
            if (r != row) {
                moves.push_back(string(1, column) + r);
            }
        }

        // Output all moves for this test case
        for (const string &move : moves) {
            cout << move << " ";
        }
        cout << endl;
    }

    return 0;
}

