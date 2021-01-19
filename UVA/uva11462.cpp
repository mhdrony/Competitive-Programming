#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,a[2000005];

    while(scanf("%lld",&n) && n!=0){
        //if(t==0) return 0;
        for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
        sort(a,a+n);

        for(int i=0;i<n-1;i++)
        printf("%lld ",a[i]);
        printf("%lld",a[n-1]);

        cout<<endl;

    }

    return 0;
}
