#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],k,t,n,p=1;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        k=n/2;
        //for(int i=0;i<n;i++)
            cout<<"Case "<<p++<<": "<<a[k];
            cout<<endl;
    }
    return 0;
}
