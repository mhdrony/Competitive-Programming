#include<stdio.h>
#include<string.h>
int main()
{
    int t,asci=0;
    char a[10];
    scanf("%d",&t);
    while(t--)
        {
        scanf("%s",a);
    if(strlen(a)==5)
        printf("3\n");
    else
    {
        if(a[0]='o')
        asci++;
        if(a[1]='n')
        asci++;
        if(a[2]='e')
        asci++;
        if(a[3]='w')
            asci++;

        if(asci<=3)
            printf("1\n");
        else
            printf("2\n");
    }


    }
    return 0;
}
