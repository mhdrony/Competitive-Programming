#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,a,sum,m,b,x,y;
    cin>>n>>a;

    x=pow(a,n+1);
    b=(x-a)/(a-1);

    sum=((n*x)-b)/(a-1);
    cout<<sum<<endl;
    return 0;
}
