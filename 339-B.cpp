#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }

    int current_position = 1;
    long long total_time = 0;

    for (int i = 0; i < m; ++i) {
        if (a[i] >= current_position) {
            total_time += a[i] - current_position;
        } else {
            total_time += n - (current_position - a[i]);
        }
        current_position = a[i];
    }

    cout << total_time << endl;
    return 0;
}
