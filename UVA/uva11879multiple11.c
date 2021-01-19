#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char m[1005];

    while(scanf("%s",&m)!=EOF){
    n=0;
    i=strlen(m);
    if(n==0&&i==1)
            break;
    for(j=0;j<i;j++){
    n=n*10+m[j]-'0';
    n=n%17;
    }
            if(n==0)
                printf("1\n");
        else
        printf("0\n");
}
    return 0;
}

