#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,max = 0;
   cin>>n;
   string s,ans = "aw";
   map<string,int> goalsMap;
   while(n--){
        cin>>s;
   if(goalsMap.count(s)){
    goalsMap[s] += 1;
   }
   else{
    goalsMap[s] = 1;
   }
   }
   map<string,int>::iterator it = goalsMap.begin();
   while(it != goalsMap.end()){
    if(it->second > max){
        max = it->second;
        ans = it->first;
    }
    it++;
   }
   cout<<ans<<endl;
    return 0;
}
