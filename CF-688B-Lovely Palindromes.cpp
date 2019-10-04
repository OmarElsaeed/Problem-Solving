#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,y;
    cin >>s;
    y = s;
    reverse(s.begin(),s.end());
    y += s;
    cout<<y;
    return 0;
}
