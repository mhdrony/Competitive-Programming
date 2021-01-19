#include<bits/stdc++.h>
using namespace std;

vector<int>pr;
bool prime[1000020];
int arr[1000005];
void sieve()
{
    for(int i=2;i<1000000;i++){
        if(prime[i]==false){
            pr.push_back(i);
            for(int j=i +i ; j<=1000000;j+=i)
            prime[j]=true ;

        }
    }
}
int main()
{
    sieve();
    int num;
    while((cin>>num), num){
        int p;
        for(int i=0;i<pr.size();i++){
            p=pr[i];
            if(p>num) break;
            int co=0;
            int lo=num;
            while(lo>=p){
                lo/=p;
                co++;
            }
            arr[p]=co;
        }
        arr[2]-=arr[5];
        arr[5]=0;
        int nm=1;
        for(int i=0;i<pr.size();i++){
            p=pr[i];
            if(p>num) break;
            for(int j=0;j<arr[p];j++){
                nm=(nm*p)%10;
            }
            arr[p]=0;
        }
        printf("%d\n",nm);
    }
}
