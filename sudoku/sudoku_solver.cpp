#include <iostream>
#include <fstream>

using namespace std;


bool valid_square(int x, int y, int k) {
    return false; //TODO
}

void solve_sudoku(/*vector<vector<int>>& grid*/) {
    //TODO
}

vector<vector<int>> to_grid(ifstream& file) {
    vector<vector<int>> grid;
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9; i++) {
            grid[k][i] = (int(file.get()));
        }
    }
    return grid;
}

void print_grid(vector<vector<int>>& grid) {
    for (auto& g : grid) {
        for (auto k : g) {
            cout << k << " ";
        } 
        cout << '\n';
    }
}

int main(int argv, char** argc) {

    ifstream txt (argc[1]);
    if (txt.fail()) {
        cout << "File failed to open.\n";
        return 1;
    }

    vector<vector<int>> game = to_grid(txt);
    txt.close();

    print_grid(game);

    return 0;
}
