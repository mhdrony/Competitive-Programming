#include<stdio.h>
int main()
{
    int i,j,a,b,t;
    char c;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            b=0;
            while(1){
                scanf("%d",&a);
                if(a>b)
                b=a;
                scanf("%c",&c);
                if(c!=' ')
                    break;
            }
            printf("Case %d: %d\n",i,b);
        }
    }
    return 0;
}
