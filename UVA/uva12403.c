#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int t,k=0,sum=0;
    scanf("%d",&t);
    while(t--){

        scanf("%s",a);
        if(strcmp(a,"donate")==0){
            scanf("%d",&k);
            sum+=k;
        }
        else{
            printf("%d\n",sum);
        }
    }
    return 0;
}
