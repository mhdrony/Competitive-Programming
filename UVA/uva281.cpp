#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    if(n%a!=0)
    cout<<a<<"/"<<b<<endl;
    else cout<<a-1<<"/"<<b-2<<endl;
    return 0;
}
