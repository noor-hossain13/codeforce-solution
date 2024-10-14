#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max = 0, min = 0, m = 0, mi = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            max = a[i];
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
            m = i; // Index of the tallest soldier
        }
        if (min >= a[i])
        {
            min = a[i];
            mi = i; // Index of the shortest soldier
        }
    }

    // Calculate the total swaps
    int swaps = m + (n - 1 - mi);

    // If the tallest is before the shortest, reduce the swap count by 1
    if (m > mi) {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}
