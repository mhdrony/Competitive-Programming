#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sum;
    while(cin>>n)
    {
        if(n==0)
            return 0;

            sum=sqrt(n);
        if(sqrt(n)==sum)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
