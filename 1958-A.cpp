#include<bits/stdc++.h>
using namespace std;

void solve() {
    int numele, maxsplit;
    cin >> numele >> maxsplit;

    vector<int> elementsec;
    elementsec.push_back(numele);
    int splitcount = 0;

    while(elementsec.size() < numele) {
        int currentele = elementsec.back();
        elementsec.pop_back();

        for(int i = 0; i < min(maxsplit-1, currentele-1); i++) {
            elementsec.push_back(1);
        }
        elementsec.push_back(currentele - min(maxsplit-1, currentele-1));
        splitcount++;
    }
    cout << splitcount << endl;
}

int main() {
    int testcase;
    cin >> testcase;
    while(testcase--) {
        solve();
    }
    return 0;
}
