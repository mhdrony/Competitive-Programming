#include <bits/stdc++.h>
int main()
{
    long long i, n, t1 , t2, sum;
    while(scanf("%lld", &n)!=EOF)
    {
        t1=0;
        t2=1;
    for (i =1;i <n;i++)
    {
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
    printf("%lld\n",sum);
    }
    return 0;
}


