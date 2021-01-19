#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}

int main()
{

    ll n;
    while(scanf("%lld",&n) && n!=0){
        vector<ll>v;
        ll sq=sqrt(n);
        for(ll i=1;i<=sq;i++){
            if(n%i==0){
                ll div=n/i;
                v.push_back(div);
                if(i!=div){
                    v.push_back(i);
                }
            }
        }
        ll cnt=0;
        for(ll i=0;i<v.size();i++)
            for(ll j=i;j<v.size();j++)
                if(lcm(v[i],v[j])==n)
                    cnt++;
        printf("%lld %lld\n",n,cnt);
    }
    return 0;
}
