#include<stdio.h>
#include<string.h>
int main()
{
    char a[14],b[14];
    int c=0,i,l,carry=0;
        while(1)
    {
        scanf("%s%s",a,b);
    if(a[0]=='0'&&b[0]=='0')
        break;
    i=strlen(a);
    l=strlen(b);
        i--;
        l--;
    while(i>=0&&l>=0){
        if(((a+b[l])+carry-96)>9){
            c++;
            carry=1;
    }
    else
    carry=0;
        i--;
        l--;
    }
        if(i>l){
    if((a+carry)>57)
        c++;
}
        else if(l>i){
    if((b[l]+carry)>57)
        c++;
}
    if(c==0)
        printf("No ");
        else
        printf("%d carry operation",c);
    if(c<2)
        printf(".\n");
    else
        printf("s.\n");
        c=0;
        a[0]='\0';
        b[0]='\0';
        carry=0;
    }
        return 0;
}
