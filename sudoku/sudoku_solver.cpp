#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool valid_square(vector<vector<int>>& grid, int r, int c, int k) {
    for (int m = 0; m < 9; m++) {
        if (grid[m][c] == k) return false;
    }
    for (int m = 0; m < 9; m++) {
        if (grid[r][m] == k) return false;
    }

    int rSquare = int(r / 3) * 3;
    int cSquare = int(c / 3) * 3;

    for (int m = 0; m < 3; m++) {
        for (int i = 0; i < 3; i++) {
            if (grid[rSquare+m][cSquare+i] == k) return false;
        }
    }
    return true;
}

void print_grid(vector<vector<int>>& grid) {
    for (auto& g : grid) {
        for (auto k : g) {
            cout << k << " ";
        } 
        cout << '\n';
    }
}

void solve_sudoku(vector<vector<int>>& grid) {
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9; i++) {
            if (grid[k][i] == 0) {
                for (int num = 1; num < 10; num++) {
                    if (valid_square(grid, k, i, num)) {
                        grid[k][i] = num;
                        solve_sudoku(grid);
                        grid[k][i] = 0;
                    }
                }
                return;
            }
        }
    }
    cout << "Solution found:\n";
    print_grid(grid);
    cout << "_________________\n";
}

vector<vector<int>> to_grid(ifstream& file) {
    vector<vector<int>> grid(9, vector<int>(9, 0));
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9; i++) {
            char curr;
            if (file.get(curr)) grid[k][i] = curr - '0';
            else {
                cerr << "Input format error\n";
                return {};
            }
        }
    }
    return grid;
}

int main(int argv, char** argc) {
    if (argv < 2) cerr << "No puzzle specified.\n";

    ifstream txt (argc[1]);
    if (txt.fail()) {
        cout << "File failed to open.\n";
        return 1;
    }

    vector<vector<int>> game = to_grid(txt);
    txt.close();

    cout << "Puzzle inputted:\n";
    print_grid(game);
    cout << "_________________\n";

    solve_sudoku(game);

    return 0;
}

