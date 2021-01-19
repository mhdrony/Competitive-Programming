#include<stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);

    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c)
            printf("OK\n");
        else
            printf("Wrong!!\n");

    }
    return 0;
}
