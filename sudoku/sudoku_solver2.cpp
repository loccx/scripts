#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ss(){
    public:
        ss(){}
    private:
}

int main(){
    const GRID_SIZE=81;
    ifstream file("sudoku.txt");
    if(!file.is_open()){
        cerr<<"file open error\n";
        return 1;
    }
    string input=getline(file,input);
    if(input.size()!=GRID_SIZE){
        cerr<<"invalid input\n";
        return 1;
    }
    int grid[9][9];
    for(int k=0;k<9;k++){
        for(int x=0;x<9;x++){
            grid[k][x]=input[k*9+x];
        }
    }
}
