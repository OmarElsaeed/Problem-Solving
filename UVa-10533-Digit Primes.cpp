#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int primesArr[1000001];
int digitPrimesArr[1000001] = {0};
int accumDigitPrimesArr[1000001] = {0};
void initiatePrimesArr();
void setPrimes();
bool isDigitPrime(int p);
void setDigitPrimes();
void setAccumDigitPriemes();//need an accumulative array to avoid Run Time Error

int main()
{
    initiatePrimesArr();
    setPrimes();
    setDigitPrimes();
    setAccumDigitPriemes();
    int cases,t1,t2,ans;
     scanf ("%d",&cases);
    while(cases--){
       // cin>>t1>>t2;
       scanf("%d%d",&t1,&t2);
        ans = accumDigitPrimesArr[t2] - accumDigitPrimesArr[t1 - 1];
        //cout<<ans<<endl;
        printf("%d\n",ans);
    }
    return 0;
}
void initiatePrimesArr(){
    for(int i = 0; i < 1000001; i++){
        primesArr[i] = 1;
    }
}

void setPrimes(){
    primesArr[0] = primesArr[1] = 0;
    int sq = sqrt(1000000);
    for(int i = 2; i <= sq; i++){
        for(int j =  i ; i * j < 1000001; j++ ){
            primesArr[i*j] = 0;
        }
    }

}

void setDigitPrimes(){
    for(int i = 2; i < 1000001; i++){
        if(primesArr[i]){
            if(isDigitPrime(i)){
                digitPrimesArr[i] = 1;
            }
        }
    }
}

bool isDigitPrime(int p){
    int sum = 0;
    while(p){
        sum += (p % 10);
        p /= 10;
    }
    return primesArr[sum];
}

void setAccumDigitPriemes(){
    for(int i = 2; i < 1000001;i++){
        accumDigitPrimesArr[i] = accumDigitPrimesArr[i - 1] + digitPrimesArr[i];
    }
}
