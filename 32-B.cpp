#include <iostream>
#include <string>
using namespace std;

string decode_borze(const string& borze_code) {
    string result;
    for (size_t i = 0; i < borze_code.length(); ++i) {
        if (borze_code[i] == '.') {
            result += '0';
        } else if (borze_code[i] == '-' && borze_code[i + 1] == '.') {
            result += '1';
            ++i; // Skip the next character since it's part of the current symbol
        } else if (borze_code[i] == '-' && borze_code[i + 1] == '-') {
            result += '2';
            ++i; // Skip the next character since it's part of the current symbol
        }
    }
    return result;
}

int main() {
    string borze_code;
    cin >> borze_code;

    string decoded_number = decode_borze(borze_code);
    cout << decoded_number << endl;

    return 0;
}
