#include<stdio.h>
#include<math.h>
int main()
{
    double n,m,k;
    while(scanf("%lf%lf",&n,&m)==2)
    {
    k=pow(m,1/n);
    printf("%.0lf\n",k);
    }
    return 0;
}
