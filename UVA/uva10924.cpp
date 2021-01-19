#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[25];
    int sum,ln;
    while(gets(s))
    {
        sum=0;
        ln=strlen(s);
        for(int i=0;i<ln;i++){
                if(s[i]>='a' && s[i]<='z')
            sum+=s[i]-'a'+1;
        else
            sum+=s[i]-'A'+27;
        }
        int ck=0;
        for(int i=2;i<=sqrt(sum);i++){
            if(sum%i==0){
                ck=1;
             break;
            }
        }
            if(ck==1) cout<<"It is not a prime word."<<endl;
            else if(ck==0) cout<<"It is a prime word."<<endl;
    }
    return 0;
}
