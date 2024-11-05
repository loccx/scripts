#include<bits/stdc++.h>
#include<sstream>

using namespace std;

int main(){
    ifstream infile("input.in");
    string line,word;

    if(!infile){
        cerr<<"error open file\n";
        return 1;
    }

    while(getline(infile,line)){
        istringstream iss(line);
        while(iss>>word){
            cout<<stod(word.substr(0,word.find('/')))/stod(word.substr(word.find('/')+1))<<' ';
        }
        cout<<endl;
    }
    return 0;
}
