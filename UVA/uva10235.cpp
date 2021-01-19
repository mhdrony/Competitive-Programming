#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,n,b,k,m,p,cnt,num,tmp;
    while(cin>>n){
            tmp=n;
    m=0;
    for(int i=2;i<=pow(n,0.5);i++){
        if(n%i==0){
           m=1;
          break;
        }
    }
    if(m==0)
        {
    num=0;
    cnt=0;
        while(n){
            a=n%10;
            num=num*10+a;
            n/=10;
        }
        for(int i=2;i<=pow(num,0.5);i++){
            if(num%i==0){
                cnt=1;
                break;
            }
        }
       if(cnt==0 && tmp!=num){
            cout<<tmp<<" is emirp."<<endl;
        }
        else
            cout<<tmp<<" is prime."<<endl;
    }
    else
        cout<<tmp<<" is not prime."<<endl;
    }
    return 0;
}
