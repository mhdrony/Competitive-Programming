#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,g;
    while(scanf("%d",&n)==1)
    {
        if(n==0){
            return 0;
        }
        g=0;
        for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++){
            g+=__gcd(i,j);
        }
        cout<<g<<endl;
    }
    return 0;
}
