#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate the length of the longest common prefix
int longest_common_prefix(const string &s, const string &t) {
    int len = 0;
    while (len < s.size() && len < t.size() && s[len] == t[len]) {
        len++;
    }
    return len;
}

int main() {
    int q; // Number of test cases
    cin >> q;
    
    while (q--) {
        string s, t;
        cin >> s >> t;

        // Find the length of the longest common prefix
        int prefix_len = longest_common_prefix(s, t);
        
        // If there is a common prefix, we copy it in 1 second, otherwise no copy
        int copy_time = (prefix_len > 0) ? 1 : 0;
        
        // Calculate the minimum time
        int result = s.size() + t.size() - prefix_len + copy_time;
        
        cout << result << endl;
    }

    return 0;
}
