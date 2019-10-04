#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, cnt = 0, arr[10];
    cin>>x;
    while(x % 10 == 0){
        x /= 10;
    }
    string s;
    stringstream ss;
    ss<<x;
    ss>>s;
   for(int i = 0;i < s.length() / 2; i++){
    if (s[i] != s[s.length() - i -1]){
        cout<<"NO";
        return 0;
    }
   }
    cout<<"YES";
    return 0;
}
