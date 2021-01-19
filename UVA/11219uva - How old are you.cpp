#include<bits/stdc++.h>
int main()
{
    int a,b,c,e,f,g,t,i,m;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d/%d/%d",&a, &b, &c);
            scanf("%d/%d/%d",&e, &f, &g);
            m=c-g;
            if(b<f)
                m--;
            else if(b==f)
                {
                if(a<e)
                m--;
            }
                 if(m<0)
                printf("Case #%d: Invalid birth date\n",i);
           else if(m>130)
                printf("Case #%d: Check birth date\n",i);
        else
                    printf("Case #%d: %d\n",i,m);
        }
    }
}
