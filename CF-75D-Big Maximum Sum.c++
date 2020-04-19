#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll arr[250000],smallArr[5000];//small arr -> just an arr accepting the elements in it so i do processes on it later
ll mem[250000];
bool visited[250000]; //i had to separate visited arr from the mem arr cause mem may have values like zero or minus
int n,m;
ll total = 0, maxElement = INT_MIN;
ll mx[50],mxe[50],mxs[50],sum[50],maxElementArr[50];

void setmxe(int x,int l);
void setmxs(int x,int l);
void setmx(int x,int l);
ll dp(int x);
int main()
{
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        int l;
        cin>>l;
        memset(smallArr,0,sizeof(smallArr));
        maxElementArr[i] = maxElement;
        for(int j = 0; j < l; j++){
            cin>>smallArr[j];
            maxElementArr[i] = max(maxElementArr[i] , smallArr[j] );
            sum[i] += smallArr[j];
        }
        setmx(i,l);
        setmxe(i,l);
        setmxs(i,l);
    }
    for(int i = 0; i < m; i++){
        cin>>arr[i];
        int arrNum = arr[i];
        arrNum--;
        maxElement = max(maxElement , maxElementArr[arrNum]);
    }
     dp(0);//had to decrease x by one
    if(maxElement < 0) cout<<maxElement;
    else cout<<total<<endl;
    return 0;
}
//set the max array of the x small array
//x -> number of the small arr, l -> length of the small arr.
void setmx(int x,int l){
    ll xSum = 0;
    for(int i = 0; i < l; i++){
        xSum += smallArr[i];
        xSum = max(xSum , ll(0));
        mx[x] = max(mx[x],xSum);
    }
}
//set the max start for the x array
void setmxs(int x,int l){
    ll xSMax = 0; //x -> number of the small arr,S -> start
    for(int i = 0; i < l; i++){
        xSMax += smallArr[i];
        mxs[x] = max(mxs[x] , xSMax);
    }
}
//set the max end for the x array
void setmxe(int x,int l){
    ll xEMax = 0;
    for(int i = --l; i >= 0; i--){
        xEMax +=  smallArr[i];//x -> number of the small arr,E -> End
        mxe[x] = max(xEMax , mxe[x]);
    }
}

ll dp(int x){
    if(x == m) return 0;
    if(visited[x]) return mem[x];

    visited[x] = true;
    int arrNum = arr[x];
    arrNum--;
    total = max(total , mxe[arrNum] + dp(x + 1));
    total = max(total , mx[arrNum]);
    mem[x] = 0;
    mem[x] = max( mem[x] , (sum[arrNum] + dp(x + 1) ) );
    mem[x] = max(mem[x] , mxs[arrNum]);

    return mem[x];

}
