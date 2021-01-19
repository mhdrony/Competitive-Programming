#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j,count;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        count=0;
        for(i=1;i<100;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(n==(i*i*i-j*j*j))
                {
                    count=1;
                    break;
                }
            }
                if(count==1)
                    break;
            }
         if(count==1)
                printf("%d %d\n",i,j);
            else
                printf("No solution\n");
    }
    return 0;
}
