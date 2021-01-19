#include<stdio.h>
int main()
{
    int n,c=1,t;
    scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
        printf("Case #%d: %d\n",c++,2*n-1);
    }
    return 0;
}
