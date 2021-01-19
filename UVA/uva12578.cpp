#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    double a1,b1,ans,r,L;
    cin>>t;
    while(t--)
    {
        r=0;
        cin>>L;
        r=L/5;
        b1=(L*6)/10;
        r=PI*r*r;
        ans=(L*b1)-r;

        printf("%.2lf %.2lf\n",r,ans);
    }
    return 0;
}
