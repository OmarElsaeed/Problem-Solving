#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int a, k, n, ans = 0;
   cin>>a>>k;
   while(a--){
    cin>>n;
    int arr[10] = {0};
    bool g = true, excedeed = false;
    while(n != 0){
        arr[n%10] = 1;
        n /= 10;
    }
    for(int i =0; i<=k;i++){
        if(arr[i] != 1){
            g = false;
            break;
        }
    }
    if(!g){
        for(int i=k+1;i<10;i++){
            if(arr[i] == 1){
            excedeed = true;
            break;
        }
        }
    }
    if(g && !excedeed)ans++;
   }
    cout<<ans;
    return 0;
}
