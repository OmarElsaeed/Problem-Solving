#include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
       long long  n,m,type,l,r;
       cin>>n;
       long long arr[n+1],sortedArr[n+1];
       arr[0] = 0;
       sortedArr[0] = 0;
       for(int i=1;i<=n;i++){
        cin>>sortedArr[i];
        arr[i] = sortedArr[i]+arr[i-1];//preprocessing (Commulative Array)
       }
       sort(sortedArr,sortedArr+n+1);
       for(int i=1;i<=n;i++){
        sortedArr[i]+=sortedArr[i-1];
       }
       cin>>m;
       while(m--){
        cin>>type>>l>>r;
       long long ans = type == 1 ? arr[r]-arr[l-1] : sortedArr[r]-sortedArr[l-1];
        cout<<ans<<endl;
       }
     
        return 0;
    }
