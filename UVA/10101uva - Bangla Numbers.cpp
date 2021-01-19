#include<bits/stdc++.h>
int main()
{
    long long n,sum,a,b,i=1;
    while(scanf("%lld",&n)!=EOF){
        printf("%lld.",i++);
        if(n>=10000000){
            n/=10000000;
            printf("%lld kuti ",n);
            n%=10000000;
        }
       else if(n==100000)
        {
            n/=100000;
            printf("%lld lakh ",n);
            n%=100000;
        }
       else if(n==10000)
        {
            n/=1000;
            printf("%lld hajar ",n);
            n%=1000;
        }
        else if(n==100)
        {
            n/=100;
            printf("%lld shata ",n);
        }
        else
            printf(" 0 ");
    }
}
