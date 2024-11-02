#include <iostream>
#include <numeric> // For gcd function
using namespace std;
int gcd(int a,int b)
{
    int temp=0;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        int ans = -1, y = 1;

        for (int i = 1; i < x; ++i) {
            if ((gcd(x, i) + i) > ans) {
                ans = gcd(x, i) + i;
                y = i;
            }
        }

        cout << y << endl;
    }

    return 0;
}
