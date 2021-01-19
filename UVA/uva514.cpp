#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];

    while(true)
    {
        cin>>n;
        if(n==0)
            //cout<<endl;
            break;

        while(true){
                cin>>a[0];
            if(a[0]==0)
            {
            cout<<endl;
            break;
            }
            for(int i=1;i<n;i++){
                cin>>a[i];
            }
            int x=1,j=0;
            stack<int >stk;
            while(x<=n){
                stk.push(x);
            while(!stk.empty() && stk.top()==a[j]){
                stk.pop();
                j++;
                if(j>=n) break;
            }
            x++;
            }
            if(stk.empty()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
