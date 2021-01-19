#include<stdio.h>
int main()
{
    int n,i,total;
    while(scanf("%d",&n)){
    if(n==0)
    break;
    for(i=0;i<n;i++){
        total=(n*(n+1)*(2*n+1))/6;
    }
    printf("%d\n",total);
    }
    return 0;
}
