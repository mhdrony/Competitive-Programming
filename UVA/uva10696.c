#include<stdio.h>
int main()
{
    int n,a,p;
    while(scanf("%d",&n)==1){
    if(n==0)
        break;

    else if(n>=101){
        a=n-10;
        printf("f91(%d) = %d\n",n,a);
    }
    else{
        a=91;
        printf("f91(%d) = %d\n",n,a);
    }
    }
    return 0;
}
