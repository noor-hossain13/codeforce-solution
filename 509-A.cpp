#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Initialize an n x n table with 0s
    vector<vector<int>> table(n, vector<int>(n, 0));

    // Set the first row and first column to 1
    for (int i = 0; i < n; i++) {
        table[i][0] = 1;
        table[0][i] = 1;
    }

    // Fill in the rest of the table
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            table[i][j] = table[i - 1][j] + table[i][j - 1];
        }
    }

    // The maximum value is at the bottom-right corner
    cout << table[n - 1][n - 1] << endl;

    return 0;
}

