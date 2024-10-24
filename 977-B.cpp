#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> freqMap;  // Map to store frequency of two-grams

    // Loop through the string and extract all two-grams
    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);  // Get the substring of length 2
        freqMap[twoGram]++;  // Increment its count in the map
    }

    // Find the two-gram with the maximum frequency
    string result;
    int maxCount = 0;

    for (const auto &pair : freqMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result = pair.first;
        }
    }

    // Output the most frequent two-gram
    cout << result << endl;

    return 0;
}

