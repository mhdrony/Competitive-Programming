#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ugly[1500]={1};
    int n2=0,n3=0,n5=0,cnt,x;
    for(int i=1;i<1500;i++){
        while(ugly[n2]*2 <= ugly[i-1])
            n2++;
        while(ugly[n3]*3 <= ugly[i-1])
            n3++;
        while(ugly[n5]*5 <= ugly[i-1])
            n5++;
        cnt=ugly[n2]*2;
        if(ugly[n3]*3 < cnt)
            cnt=ugly[n3]*3;
        if(ugly[n5]*5 < cnt)
            cnt=ugly[n5]*5;

            ugly[i]=cnt;
    }
    cout<<ugly[1499]<<endl;

    return 0;
}
