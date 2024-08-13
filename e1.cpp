#include <bits/stdc++.h>
using namespace std;

int CountTriplets(int arr[], int n) {
    int ans = 0;
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] % arr[i] == 0) {
                cnt[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        ans += cnt[i];
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << CountTriplets(arr, n) << endl;
    return 0;
}
