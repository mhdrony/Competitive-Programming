#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,m,n,p,t;
    scanf("%d",&t);
    while(t--){

    scanf("%d%d%d",&a,&b,&c);
    m=(c*(a+(a-b)));
    n=(a+b);
    p=(m/n);
    if(p>=0)
    printf("%d\n",p);
    else
        printf("0\n");
    }
    return 0;
}
