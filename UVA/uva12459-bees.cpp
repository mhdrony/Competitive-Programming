///it is a fibonacci series problem...solve by fibonacci series
#include <bits/stdc++.h>
int main()
{
    long long n,sum,a,b,i;
    while(scanf("%lld",&n)!=EOF)
        {
            if(n==0)
        break;
        a=0;
        b=1;
    for(i=1;i<=n;i++)
    {
    sum=a+b;
        a=b;
        b=sum;
    }
    printf("%lld\n",sum);
}
return 0;
}
