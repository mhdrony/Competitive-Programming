#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,m,s1,p,l,k;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){

        s1=(a+b+c)/2;
        m=(s1*(s1-a)*(s1-b)*(s1-c));
        k=sqrt(m);
        l=(4*k)/3;

        if(l>0)
        printf("%.3lf\n",l);
        else
            printf("-1.000\n");
    }
    return 0;
}
