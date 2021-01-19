#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int>mp;
        int n,k,a,g,ck;
        cin>>n;
        for(int i=1;i<=n;i++){
                ck=i;
        while(ck>0){
            mp[ck%10+'0']++;
            ck=ck/10;
        }
        }
    printf("%d %d %d %d %d %d %d ",mp['0'],mp['1'],mp['2'],mp['3'],mp['4'],mp['5'],mp['6']);
    printf("%d %d %d\n",mp['7'],mp['8'],mp['9']);
    }
}
