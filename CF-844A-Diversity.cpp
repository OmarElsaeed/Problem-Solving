#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    set<char> mySet;
    if(s.size() < k){
        cout<<"impossible"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<s.size();i++){
            mySet.insert(s[i]);
        }
    }
    if(mySet.size() >= k){
        cout<<"0"<<endl;
    }
    else{
        cout<<k - mySet.size()<<endl;
    }
    return 0;
}
