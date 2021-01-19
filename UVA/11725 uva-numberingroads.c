#include<stdio.h>
int main()
{
    int m,n,i=1,k;
    while(scanf("%d%d",&m,&n)!=EOF)
        {
        if(m==0 && n==0)
        break;
    k=(m-1)/n;
    if(k>26)
        printf("Case %d: impossible\n",i++);
    else
        printf("Case %d: %d\n",i++,k);
    }
    return 0;
}
