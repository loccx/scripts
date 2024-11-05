#include<bits/stdc++.h>

#define endl '\n'
#define fork(a,b) for(ll k=a;k<=b;k++)
#define fori(a,b) for(ll i=a;i<=b;i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define fill(a,b,c) fill(a,a+b,c)
#define bug(x) cout<<#x<<" : "<<x<<'\n';
#define hi cout<<"hi\n";
#define inf INT_MAX;

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;

unordered_map<string,pair<double,double>> items = {
    {"burrito",{660,32}},
    {"caesar salad",{310,18}},
    {"muscle milk",{200,40}},
    {"soylent",{400,20}},
    {"yogurt",{180,12}},
    {"bar",{200,20}},
    {"tea",{3,0}}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); std::cout.tie(0);

    time_t now=time(0);
    tm* dt=localtime(&now);
    std::cout<<1900+dt->tm_year<<endl;
    std::cout<<1+dt->tm_mon<<endl;
    std::cout<<dt->tm_mday<<endl;

    std::cout<<"What have you eaten today?\n";
    vector<string> eaten;
    while(1){
        string food; cin>>food;
        if(food=="done") break;
        eaten.push_back(food);
    }
    double total_calories=0;
    double total_protein=0;
    for(string& e:eaten){
        if(items.at(e).first==0){
            std::cout<<"Calorie count of "<<e<<"?\n";
            double cal; cin>>cal;
            std::cout<<"Protein count of "<<e<<"?\n";
            double pro; cin>>pro;
            items[e]={cal,pro};
        }
        total_calories+=items[e].first;
        total_protein+=items[e].second;
    }
    std::cout<<"Total calories: "<<total_calories<<endl;
    if(total_calories>2000) std::cout<<"You are: "<<total_calories-2000<<" calories over budget!\n";
    else std::cout<<"You are at a: "<<2000-total_calories<<" calorie deficit!\n";
    std::cout<<"Total protein: "<<total_protein<<endl;

    return 0;
}
