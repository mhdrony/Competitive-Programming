#include<stdio.h>
int main()
{
    int i,t,count=0;
    double l,w,h,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf%lf%lf%lf",&l,&w,&h,&m);
        n=l+w+h;
        if(n<=125 && m<=7 || l==56 && w==45 && h==25 && m<=7){
            count++;
            printf("1\n");
            }
        else
            printf("0\n");
    }
        printf("%d\n",count);
    return 0;
}
