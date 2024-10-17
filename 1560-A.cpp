#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is disliked by Polycarp
bool isDisliked(int num) {
    return (num % 3 == 0) || (num % 10 == 3);
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    vector<int> k(t);  // Array to store the value of k for each test case

    // Reading input test cases
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }

    // Let's generate liked numbers until we cover all needed k values (up to 1000)
    vector<int> likedNumbers;  // This will store Polycarp's liked numbers
    int num = 1;
    while (likedNumbers.size() < 1000) {  // We need at least 1000 numbers
        if (!isDisliked(num)) {
            likedNumbers.push_back(num);  // Add the number if it is liked
        }
        ++num;
    }

    // Output the k-th liked number for each test case
    for (int i = 0; i < t; ++i) {
        cout << likedNumbers[k[i] - 1] << endl;  // Output the k-th element (1-based index)
    }

    return 0;
}

