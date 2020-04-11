#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

map<pair<int,int> , ll> mem;//using memorization array so don't calculate the same paths over and over and make TLE
set<pair<int,int> > unSafe;

ll dp(int x, int y);
 int n , m;
int main()
{
    int cases,r,c;
    string s;
    cin>>cases;
    while(cases--){
            mem.clear();
            unSafe.clear();
        cin>>n>>m;
        for(int i = 1;i <= n; i++){
            cin>>r;
            getline(cin,s);
            stringstream ss(s);
            while(ss >> c){
                unSafe.insert({r,c});
            }
        }
        cout<<dp(1 , 1)<<"\n";
        if(cases > 0) cout<<"\n";
    }
    return 0;
}

ll dp(int x, int y){
    if(x == n && y == m)
        return 1;
    if(x > n || y > m || unSafe.find({x,y}) != unSafe.end())
        return 0;
    if(mem.find({x,y}) != mem.end())
        return  mem[{x,y}];
    ll &ret = mem[{x,y}];
    ret = 0;
    ret += dp(x + 1 , y);
    ret += dp(x, y + 1);
    return ret;
}
