#include <iostream>
#include <string>

using namespace std;

int main() {
    int entity_count = 0;
    cout << "How many entities ordered?\n";
    cin >> entity_count;

    double original_total = 0;
    cout << "What is the original total including tax?\n";
    cin >> original_total;

    double discounted_total = 0;
    cout << "What is the discounted total\n";
    cin >> discounted_total;

    vector<string> names;
    vector<double> discounted_amounts;

    string name;
    double amount;
    for (int p = 0; p < entity_count; p++) {
        cout << "What is entity " << p << "\'s name?\n";
        cin >> name;
        cout << "How much is " << name << "\'s order?\n";
        cin >> amount;

        names.push_back(name);
        discounted_amounts.push_back(amount * discounted_total / original_total);
    }

    // print the receipt
    cout << "|_____________________________|\n";
    cout << "|___________RECEIPT___________|\n";
    cout << "|_____________________________|\n";
    for (int p = 0; p < entity_count; p++) {
        cout << names[p] << ": " << discounted_amounts[p] << '\n';
        cout << "|_____________________________|\n";
    }
    cout << "|__________END_RECEIPT________|\n";
    cout << "|_____________________________|\n";
    cout << "Venmo: locc_xu\n";
}
