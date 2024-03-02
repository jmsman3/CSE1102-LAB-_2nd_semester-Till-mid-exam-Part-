#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    while (t--) {
        int color_input;
        cin >> color_input;
        cin.ignore(); // Ignore the newline character after reading color_input

        while (color_input--) {
            string kalar;
            getline(cin >> ws, kalar, ','); // Read until comma and trim leading whitespace
            cout << kalar << endl;
        }
    }

    return 0;
}
