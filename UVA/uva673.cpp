#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    //char s[105];
    cin>>n;
    getchar();
    while(n--){
    //cin>>s;
   // gets(s);
   getline(cin,s);
   int l=s.size();
   // int l=strlen(s);
    if(l==0){
        cout<<"Yes"<<endl;
        continue;
    }

    stack<char >stk;

    for(int i=0;i<l;i++)
    {
        if(s[i]=='(' || s[i]=='['){
            stk.push(s[i]);
            }
            else if(s[i]==')'){
                if(stk.empty() || stk.top()!='('){
                    stk.push('a');
                    break;
                }
                stk.pop();
            }
            else if(s[i]==']'){
                if(stk.empty() || stk.top()!='['){
                    stk.push('a');
                    break;
                }
                stk.pop();
            }
        }
    if(stk.empty()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    return 0;
}

