#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105];
    int t,i,l,j,sum;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(ch);
        sum=0;
        l=strlen(ch);
        for(j=0;j<l;j++)
        {
            if((ch[j]=='a' )||(ch[j] =='d' )||(ch[j]=='g')||(ch[j]=='j')||(ch[j]=='m')||(ch[j]=='p')||(ch[j]=='t')||(ch[j]=='w')||(ch[j]==' '))
                sum=sum+1;
            else if((ch[j]=='b' )|| (ch[j]=='e' )|| (ch[j]=='h' )|| (ch[j]=='k' )|| (ch[j]=='n') || (ch[j]=='q') || (ch[j]=='u') || (ch[j]=='x') )
                sum=sum+2;
            else if((ch[j]=='c' )|| (ch[j]=='f' )|| (ch[j]=='i') || (ch[j]=='l') || (ch[j]=='o') || (ch[j]=='r') || (ch[j]=='v') || (ch[j]=='y') )
            sum=sum+3;
                else if((ch[j]=='s') || (ch[j]=='z'))
                sum=sum+4;
        }
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}
