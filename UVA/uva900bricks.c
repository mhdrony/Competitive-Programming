#include<stdio.h>
int main()
{
    long long arr[55];
    int i,n;
    arr[0]=1;
    arr[1]=2;

    for (i=2;i<55;i++)
        arr[i]=arr[i-1]+arr[i-2];
    while (scanf("%d", &n)) {
        if(n==0)
            break;
        printf("%lld\n",arr[n-1]);
    }
        return 0;
}
