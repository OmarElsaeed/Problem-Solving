#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n , k ,index = 0, ans = 0;
   bool countFromLeft = true;
   cin>>n>>k;
   int arr[n];
   for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(arr[i] <= k && countFromLeft){
        ans += 1;
        index = i;
    }
    else {
        countFromLeft = false;
    }
   }
   n--;
   for(n; n > index; n--){
        if(arr[n] <= k ){
        ans += 1;
        }
        else{
            break;
        }
   }
   cout<<ans<<endl;
    return 0;
}
