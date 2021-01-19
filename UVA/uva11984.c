#include<stdio.h>
int main()
{
    int t,i,c,d;
    double x,f;

    while(scanf("%d",&t)==1){
            for(i=1;i<=t;i++){
            scanf("%d%d",&c,&d);
            f=9*c/5+d;
            x=f*5/9;
            printf("case %d: %.2lf\n",i,x);
            }
    }
    return 0;
}
