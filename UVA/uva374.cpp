#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Bigmod(ll B,ll P,ll M){
    if(P==0)
        return 1%M;
   long x=Bigmod(B,P/2,M);
   x=x*x%M;
   if(P%2)
    x=x*B%M;
   return x;
}
int main()
{
    ll B,P,M;
    while(cin>>B>>P>>M)
    cout<<Bigmod(B,P,M)<<endl;
    return 0;
}

