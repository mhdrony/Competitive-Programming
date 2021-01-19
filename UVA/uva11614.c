#include<stdio.h>
#include<math.h>

int main()
{
    long long i,t,n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        n=(sqrt(1+8*n)-1)/2;
        printf("%lld\n",n);
    }
    return 0;
}
