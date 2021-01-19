#include<stdio.h>
int main()
{
    long long int a,b,c,i=0,t;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
    if(a+b<=c || b+c<=a || c+a<=b || a==0 || b==0 || c==0 || a<0 || b<0 || c<0)
       printf("Case %lld: Invalid\n",++i);

       else if(a==b && b==c && c==a)
            printf("Case %lld: Equilateral\n",++i);
        else if(a==b || b==c || a==c)
            printf("Case %lld: Isosceles\n",++i);
        else if(a!=b || b!=c || c!=a)
            printf("Case %lld: Scalene\n",++i);
    }

    return 0;
}
