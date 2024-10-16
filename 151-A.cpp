#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Calculate the total number of toasts each friend can make based on drink, lime, and salt
    int total_drink = (k * l) / nl;     // Total toasts possible from the drink
    int total_limes = c * d;            // Total lime slices
    int total_salt = p / np;            // Total toasts possible from the salt

    // Calculate the number of toasts per friend (minimum of all resources divided by number of friends)
    int max_toasts = min({total_drink, total_limes, total_salt}) / n;

    // Output the result
    cout << max_toasts << endl;

    return 0;
}

