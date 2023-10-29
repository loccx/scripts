#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    string input;

    ofstream data("data.txt", ios::app);

    cout << "What is your name?\n";
    cin >> input;
    data << input << ",";
    cout << "What is your major?\n";
    cin >> input;
    data << input << ",";
    cout << "What is your GPA?\n";
    cin >> input;
    data << input << ",";
    cout << "What is your age?\n";
    cin >> input;
    data << input << ",";
    cout << "Do you party?\n";
    cin >> input;
    data << input << ",";
    cout << "How often do you party?\n";
    cin >> input;
    data << input << ",";
    cout << "Do you consume alcohol?\n";
    cin >> input;
    data << input << ",";
    cout << "Do you smoke?\n";
    cin >> input;
    data << input << '\n' << '\n';
    data.close();
}
