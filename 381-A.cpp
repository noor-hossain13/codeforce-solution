#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Number of cards
    cin >> n;

    vector<int> cards(n); // Cards in a row
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int sereja_points = 0, dima_points = 0; // Initialize scores
    int left = 0, right = n - 1; // Pointers to the leftmost and rightmost cards
    bool sereja_turn = true; // Sereja plays first

    while (left <= right) {
        if (cards[left] > cards[right]) {
            // The leftmost card is greater
            if (sereja_turn) {
                sereja_points += cards[left];
            } else {
                dima_points += cards[left];
            }
            ++left; // Move the left pointer
        } else {
            // The rightmost card is greater
            if (sereja_turn) {
                sereja_points += cards[right];
            } else {
                dima_points += cards[right];
            }
            --right; // Move the right pointer
        }
        // Switch turns
        sereja_turn = !sereja_turn;
    }

    // Output the final scores
    cout << sereja_points << " " << dima_points << endl;

    return 0;
}
