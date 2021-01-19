#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[105],s2[101];
    int l,j,m;
    while(gets(s1))
    {
        if(strcmp(s1,"DONE")==0)
            break;

        l=strlen(s1);
        for(int i=0;i<l;i++)
        {

    if(s1[i]>='A' && s1[i]<='Z')
        s2[j]+=s1[i]+32;

    else if( s1[i]>='a' && s1[i]<='z')
    s2[j]+=s1[i];

        }
    int sz=strlen(s2);
    int sz1=sz/2;
    sz--;
        int ck=1;
    for(int i=0; i<sz1;i++)
    {
        if(s2[i]==s2[sz--])
            continue;
        else
            ck=0;
    }

    if(ck)
        cout<<"You won't be eaten!"<<endl;
    else
        cout<<"Uh oh.."<<endl;

    }

return 0;
}
