///بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
///La ilaha illallahu muhammadur rosulullah
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int n;
    string s;

    //int ck=0;

    stack<int >stk;
    //stk.push(s[0]);
    // while(scanf("%d",&n)!=0){
    cin>>s;
    int i=0;
    while(i<s.size())
    {
        if(s[i]==')')
        {
            if(stk.empty())
            {
                cout<<"No"<<endl;
                return 0;
            }
            else
            {
                stk.pop();
            }

        }
        else
        {
            stk.push(s[i]);

        }
        i++;

    }
    if(!stk.empty())
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    //}
    return 0;
}
