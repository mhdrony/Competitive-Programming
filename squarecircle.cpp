#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t,cs=1;
    double r,x,m,k=0,ans=0;
    cin>>t;
    while(t--){
        scanf("%lf",&r);
        k=r+r;
        x=k*k;
        m=pi*r*r;
        ans=(x-m);
        printf("Case %d: %.2lf\n",cs++,ans);
    }
    return 0;
}
