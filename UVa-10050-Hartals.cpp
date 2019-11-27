#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int T;
     scanf("%d",&T);           
    while(T--){
            int N,P;
       scanf("%d %d",&N,&P);
       vector<int> v(N);
    while(P--){
        int h;
        scanf("%d",&h);
        for(int i = h;i <= N;i+= h){
            if(!((i % 7 == 0) || ((i - 6) % 7 == 0) || i == 6) )v.at(i-1) = 1 ;// i % 7 == 6
        }
    }
    int ans = 0;  //الفكره كلها كانت ف اني استخدم الفيكتور بدل الاري واستخدم الايتيريتورلانه اسرع كتير ف اني ااكس العنصر
    vector<int>::iterator it = v.begin();
    for(it; it != v.end(); it++){
        if(*it)ans+=1;
    }
    cout<<ans<<endl;
    }
    return 0;
}
