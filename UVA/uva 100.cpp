#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        int x=a;
        int y=b;
        if(a>b) swap(a,b);
        int mx=0,cnt;
        while(a<=b)
        {
            int n=a;
            cnt=1;
            while(n!=1)
            {
                if(n%2==0) n=n/2;
                else n=3*n+1;

                cnt++;
            }
            if(mx<cnt) mx=cnt;

            a++;
        }
        cout<<x<<" "<<y<<" "<<mx<<endl;
    }
    return 0;
}
