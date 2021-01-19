#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x[1005];
    double avg;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>x[i];
            sum+=x[i];
        }
        double cnt=0;
        avg=(double)sum/(double)n;
        for(int i=0;i<n;i++){
            if(x[i]>avg)
                cnt++;
        }
        printf("%.3lf",cnt/(double)n*100);
        //printf("%\n");
        cout<<"%"<<endl;

    }
    return 0;
}
