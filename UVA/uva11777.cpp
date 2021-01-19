#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ts=1,t;
    cin>>t;
    while(t--)
    {
        int tm1,tm2,fn,an,ct[3];
        cin>>tm1>>tm2>>fn>>an>>ct[0]>>ct[1]>>ct[2];
        for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            if(ct[j]<ct[j+1]){
                int k=ct[j];
                ct[j]=ct[j+1];
                ct[j+1]=k;
            }
        }
        int sum=0;
        sum=tm1+tm2+fn+an+((ct[0]+ct[1])/2);
        //cout<<sum<<endl;
        if(sum>=90) printf("Case %d: A\n",ts++);
        else if(sum>=80) printf("Case %d: B\n",ts++);
        else if(sum>=70) printf("Case %d: C\n",ts++);
        else if(sum>=60) printf("Case %d: D\n",ts++);
        else printf("Case %d: F\n",ts++);

    }
    return 0;
}
