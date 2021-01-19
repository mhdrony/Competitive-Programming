#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    ll n;
    while(scanf("%lld",&n) && n){
            ll m=1;
        while(m<n){
            m*=2;
        m++;
        }
        if(m==n) printf("Bob\n");
        else printf("Alice\n");
    }
    return 0;
}
