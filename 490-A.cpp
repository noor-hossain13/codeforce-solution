#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> programming, maths, pe;

    for (int i = 1; i <= n; ++i) {
        int skill;
        cin >> skill;
        if (skill == 1) {
            programming.push_back(i); // Store index of programming student
        } else if (skill == 2) {
            maths.push_back(i); // Store index of maths student
        } else {
            pe.push_back(i); // Store index of PE student
        }
    }

    // The number of teams we can form is the minimum of the sizes of these three categories
    int num_teams = min({programming.size(), maths.size(), pe.size()});
    cout << num_teams << endl;

    // Form the teams
    for (int i = 0; i < num_teams; ++i) {
        cout << programming[i] << " " << maths[i] << " " << pe[i] << endl;
    }

    return 0;
}
