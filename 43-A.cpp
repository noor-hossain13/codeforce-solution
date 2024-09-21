#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of goals

    string team1, team2;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; ++i) {
        string team;
        cin >> team;

        if (i == 0) {
            // Initialize the first team
            team1 = team;
            count1++;
        } else if (team == team1) {
            // Increment the count for team1
            count1++;
        } else {
            if (team2.empty()) {
                // Initialize the second team
                team2 = team;
            }
            // Increment the count for team2
            count2++;
        }
    }

    // Output the team with the higher score
    if (count1 > count2) {
        cout << team1 << endl;
    } else {
        cout << team2 << endl;
    }

    return 0;
}
