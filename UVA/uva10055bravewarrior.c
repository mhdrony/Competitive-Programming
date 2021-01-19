#include<stdio.h>
int main()
{
    long long a,b,ans;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        ans=a-b;
        if(ans<0){
                ans=ans*-1;
    }
       printf("%lld\n",ans );
    }
    return 0;
}
