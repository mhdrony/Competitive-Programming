#include<bits/stdc++.h>
#define PI 3.141592653589793
using namespace std;
int main()
{
    double a,b,c,s,n,x1,x2,x3,y1,y2,y3,r;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
    a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    s=(a+b+c)/2;
    r=(a*b*c)/(4*sqrt(s*(s-a)*(s-b)*(s-c)));
    n=2*PI*r;
    printf("%.2lf\n",n);
    }
}
