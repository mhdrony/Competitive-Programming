#include<bits/stdc++.h>
int main()
{
    long int n,i,fm,m,total,M,Fm;
    while (1)
    {
        scanf("%ld",&n);
        if (n==-1)
            break;
        fm=1;
        Fm=0;
        total=1;
        m=0;
        for (i=1;i<=n;i++)
        {
            m=total;
            M=fm;
            fm+=Fm;
            total+=fm;
            Fm=M;
        }
        printf("%ld %ld\n",m,total);
    }
    return 0;
}
