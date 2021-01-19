#include<stdio.h>
int main()
{
    int a,b,t,c,i;
    scanf("%d",&t);

    while(t--){
        scanf("%d%d%d",&a,&b,&c);

        if(a>b || b>c || a>c)
            printf("%d",b);
    }
}
