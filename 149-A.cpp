#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(12); // 12 months growth
    for(int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    // Sort the growth values in descending order
    sort(a.rbegin(), a.rend());

    if(n == 0) {
        // If no growth is required, output 0
        cout << 0 << endl;
        return 0;
    }

    int totalGrowth = 0;
    int months = 0;

    // Try to accumulate the required growth using the fewest months
    for(int i = 0; i < 12; i++)
    {
        totalGrowth += a[i];
        months++;

        // If we've reached or exceeded the required growth
        if(totalGrowth >= n) {
            cout << months << endl;
            return 0;
        }
    }

    // If we go through all the months and still can't reach the required growth
    cout << -1 << endl;

    return 0;
}
