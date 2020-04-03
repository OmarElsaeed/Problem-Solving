#include <iostream>
#include<math.h>

using namespace std;
int LNOD(unsigned long long n);//-> largest number of divisors
int main()
{
   unsigned long long n,l,u;
   cin>>n;
   while(n--){
    cin>>l>>u;
   int large = 0,num;
    for(unsigned long long i = l;i<=u;i++){
            int x = LNOD(i);
        if(x>large){
           large = x;
            num = i;
        }
    }
    cout<<"Between "<<l<<" and "<<u<<", "<<num<<" has a maximum of "<<large<<" divisors."<<endl;
   }
    return 0;
}
int LNOD(unsigned long long n){
    int large = 0;
    unsigned long long i =1;
    unsigned long long sq = sqrt(n);
    for(i;i<=sq;i++){
        if(n%i == 0){
            large+=2;
        }
    }
        i--;
    if(i * i == n)large--;

    return large;
}
