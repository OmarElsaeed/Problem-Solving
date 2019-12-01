#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f,s;
     while(scanf("%d",&n) == 1){
     vector<int> v(n,0);
     vector<int>::iterator it = v.begin();
     scanf("%d",&f);
     n--;
     int g = n;
    while(n--){
       scanf("%d",&s);
       if(abs(f-s) <= g){
        *(v.begin()+(abs(f-s))) = 1;
       }
       f = s;
    }
    bool isJolly = true;
    for(int i = 1; i <= g; i++){
        if(v[i] == 0)
        {
            cout<<"Not jolly"<<endl;
            isJolly = false;
            break;
        }
    }
    if(isJolly) cout<<"Jolly"<<endl;
    }
    return 0;
}
