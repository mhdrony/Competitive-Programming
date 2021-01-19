#include<stdio.h>
#include<math.h>
int main()
{
    float t1,t2,l,u,v,a;
    int i=1,t;
    scanf("%d",&t);
    while(t--){
        scanf("%f%f%f",&l,&v,&u);
        if(u==0||v==0||v>=u){
            printf("Case %d: can't determine\n",i++);
            continue;
        }
        t1=(l*1.0)/(u*1.0);
        t2=(l*1.0)/(sqrt(u*u-v*v)*1.0);
        a=fabs(t2-t1);
        printf("Case %d: %.3f\n",i++,a);

    }
    return 0;
}
