#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // Read the entire line

    set<char> distinct_letters;  // Set to store distinct letters

    // Traverse the string and add each letter to the set
    for (char ch : input) {
        if (ch >= 'a' && ch <= 'z') {  // Check if the character is a lowercase letter
            distinct_letters.insert(ch);
        }
    }

    // The size of the set will give the number of distinct letters
    cout << distinct_letters.size() << endl;

    return 0;
}

