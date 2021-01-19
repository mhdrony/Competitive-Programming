#include<stdio.h>
int main(){

    int i,j,n,a[1000],t,ans,sum;
    while(scanf("%d",&n)==1){
        ans=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    for(j=n-1;j>=i;j--)
    if(a[j-1]>a[j]){
        t=a[j-1];
        a[j-1]=a[j];
        a[j]=t;
    }
     sum=sum+1;
    printf("Minimum exchange operations: %d\n",ans);
    }
return 0;

}
