#include <iostream>
#include <string>

using namespace std;

/*
 * Asks for score, in fraction form
 * Asks for weight, in percentage form
 */

int main() {

    double inp;
    bool loop = true;
    while (loop) {
        cout << "Enter score as fraction ('n' to stop)" << '\n';
        cin >> inp;

        if (to_string(inp) == "n" || to_string(inp) == "N") {
            loop = false;
        }
        else {
            cout << inp << '\n';
        }
    }
    return 0;
}
