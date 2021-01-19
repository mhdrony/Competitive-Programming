///automatic answer;;;10th coloumn means after calculation
/// n=n/10;n=n%10;n=absolute(n);;;;

#include<stdio.h>
int main()
{
    int i,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n=((((n*567)/9))+7492)*235;
        n=(n/47)-498;
        n=n/10;
        n=n%10;
        n=abs(n);
        printf("%d\n",n);
    }
}
