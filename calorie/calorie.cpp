#include<algorithm>
#include<iostream>
#include<cmath>

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int c;
    int N=2000;
    while(cin>>c){
        cout<<c<<endl;
        N-=c;
    }
    if(N>0)cout<<"you have "<<N<<" calories left today.\n";
    else if(N==0)cout<<"you have reached 2000 calories!\n";
    else {
        cout<<"you have surpassed 2000 calories by "<<-N<<'\n';
    }
    return 0;
}
