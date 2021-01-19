#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[2005],cnt,x;
    vector<int>v;
    while(cin>>n && n!=0)
    {
        int i=0;
        while(n!=0){
            a[i]=n%2;
            n/=2;
            i++;
            }
        printf("The parity of ");
        cnt=0;
            for(i=i-1;i>=0;i--){
                printf("%d",a[i]);
                if(a[i]==1)
                    cnt++;
            }
        printf(" is %d (mod 2).\n",cnt);
    }
    return 0;
}
