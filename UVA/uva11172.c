#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        if(a-b==0){
            printf("=\n");}
            else if(a-b>0){
                printf(">\n");
            }
            else if(a-b<0){
                printf("<\n");
            }
    }
    return 0;
}