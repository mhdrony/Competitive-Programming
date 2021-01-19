#include<bits/stdc++.h>

int main()
{
    double a,b,c,k,r,p,y,total,v;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
        {
    p=(a+b+c)/2;
    k=sqrt(p*(p-a)*(p-b)*(p-c));
   r=3.141592653589793*pow((k/p),2);
    v=k-r;
    total=3.141592653589793*pow(((a*b*c)/(4*k)),2);
    y=total-(r+v);
    printf("%.4lf %.4lf %.4lf\n",y,v,r);
    }

    return 0;
}
