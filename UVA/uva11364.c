#include<stdio.h>
int main()
{

    int t,n,k,mx,mn;
    scanf("%d",&t);
    while(t--){

    scanf("%d",&k);
            mn=1000;
            mx=0;
        while(k--){
            scanf("%d",&n);
            if(n>mx)
                mx=n;
            if(n<mn)
                mn=n;
        }
        printf("%d\n",(mx-mn)*2);
    }
    return 0;
}
