#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2,a,b,k,l=1,t,i;
    ;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++){
                printf("\n");
            scanf("%d/%d/%d%d/%d/%d",&d1,&m1,&y1,&d2,&m2,&y2);

            a=y1-y2;
           /* if(m2<m1){
                a--;
            }
            else if(m1==m2){
                if(d1>d2)
                    a--;
            }  */
        }
        if(a<0)
            printf("Case #%d: Invalid birth date\n",l++);
        else if(a>130)
            printf("Case #%d: Check birth date\n",l++);
        else
            printf("Case #%d: %d\n",l++,a);
    }
    return 0;
}
