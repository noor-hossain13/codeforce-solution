#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t; // Input for the number of test cases
    while (t--) {
        ll m, n;
        cin >> m >> n; // Input number of elements and operations
        vector<ll> a(m); // Declare a vector of size m
        for (int i = 0; i < m; i++)
            cin >> a[i]; // Input elements of the vector

        while (n--) {
            ll maxx = 0; // To store the maximum value
            char x;
            ll y, z;
            cin >> x >> y >> z;
            int b;// Input the operation and range

            if (x == '+') 
            {
                for (int i = 0; i < m; i++) { // Corrected loop condition
                    if (y <= a[i] || a[i] <= z) // Corrected logical operator
                        a[i] += 1;
                    if (maxx < a[i])
                        maxx = a[i];
                }
                b[i]=maxx;
            }

        }

    }
    return 0;
}
