
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Number of legs

        // Minimum number of animals is n / 2
        if(n<4)
        cout << n / 2 << endl;
        else
        {
           if(n%4==0)
            cout<<n/4<<endl;
           else
             cout<<n/4+1<<endl;
        }
    }

    return 0;
}
