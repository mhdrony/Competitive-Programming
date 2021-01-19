#include<bits/stdc++.h>
#include<string.h>
int main()
{
    int i,t;

    scanf("%d",t);
    while(t--){
            char str[12],l;
        scanf("%s",str);
        l=strlen(str);
            if(l==5)
                printf("3\n");
            else
            {
                int k=0;
                if(str[0]=='o')
                    k++;
                if(str[1]=='n')
                k++;
                if(str[2]=='e')
                k++;
                if(k>=2)
                    printf("1\n");
                else
                    printf("2\n");
            }
    }
    return 0;
}
