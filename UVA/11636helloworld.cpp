///بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
///La ilaha illallahu muhammadur rosulullah
#include<bits/stdc++.h>
#define ll long long
#define speedup ios_base::sync_with_stdio(0);cin.tie(NULL)
using namespace std;
int main()
{
    speedup;
    int n,t=1,sum=0;
    while(scanf("%d",&n)==1 && n!=-1)
    {
        if(n==1)
            printf("Case %d: %d\n",t++,0);

        for(int i=0; i<=14; i++)
            if(n>pow(2,i) && n<=pow(2,i+1))
                printf("Case %d: %d\n",t++,i+1);
    }

    return 0;
}
