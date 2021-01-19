#include<stdio.h>
int main()
{
    int t,a,b,m,n;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&a,&b);
        if(a>=b && (a+b)%2==0){
        m=(a+b)/2;
        n=(a-b)/2;
            printf("%d %d\n",m,n);
    }
        else
            printf("impossible\n");
    }
    return 0;
}
