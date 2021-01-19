#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,k,sum,m,a,b=0;
cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {

        if(n==0){
                cout<<"END OF OUTPUT"<<endl;
            return 0;
        }
            a=0;

        for(int i=1;i<n;i++){
            if(n%i==0){
                a=a+i;
            }
        }

        if(a==n)
            cout<<setw(5)<<n<<"  "<<"PERFECT"<<endl;
        else if(a<n)
            cout<<setw(5)<<n<<"  "<<"DEFICIENT"<<endl;
        else
            cout<<setw(5)<<n<<"  "<<"ABUNDANT"<<endl;
    }

    return 0;
}
