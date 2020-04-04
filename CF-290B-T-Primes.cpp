                        //the key for this problem is that to be a T-Prime  your sqrt must be prime.
#include <iostream>
#include <math.h>
#define m 1000001

using namespace std;

typedef  long long ll;

bool PrimesArr[1000001] = {0};
void setPrimesArr();
bool isTPrime(ll n);

int main()
{
    setPrimesArr();
    ll cases,n;
    cin>>cases;
    while(cases--){
        cin>>n;
        if(isTPrime(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

void setPrimesArr(){
    PrimesArr[0] = PrimesArr[1] = 1;
    int sq = sqrt(m);
    for(int i = 2; i <= sq; i++){
            if(!PrimesArr[i]){
                for(int j = i * i; j < m;j+=i)
                {
                    PrimesArr[j] = 1;
                }
            }

    }

}
bool isTPrime(ll n){
    double sq = sqrt(n);

    if(!PrimesArr[ll(sq)] && sq == int(sq) ) return 1;//the key for this problem is that to be a T-Prime  you sqrt must be prime
     else return 0;
    }


