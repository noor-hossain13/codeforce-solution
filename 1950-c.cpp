#include <iostream>
#include <string>
using namespace std;

string convertTo12HourFormat(string time24) {
    // Extract the hour and minute from the input string
    int hour = stoi(time24.substr(0, 2));
    string minute = time24.substr(3, 2);

    // Determine if it's AM or PM
    string period;
    if (hour == 0) {
        hour = 12;  // Midnight case, 00 becomes 12 AM
        period = "AM";
    } else if (hour == 12) {
        period = "PM";  // Noon case
    } else if (hour < 12) {
        period = "AM";  // Morning case
    } else {
        hour -= 12;  // Afternoon case
        period = "PM";
    }

    // Format hour with leading zero if needed
    string hour12 = (hour < 10 ? "0" : "") + to_string(hour);

    // Return the formatted 12-hour time
    return hour12 + ":" + minute + " " + period;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        string time24;
        cin >> time24;  // Read the time in 24-hour format

        // Convert and output the result
        cout << convertTo12HourFormat(time24) << endl;
    }
    return 0;
}

