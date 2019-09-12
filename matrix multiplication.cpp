///بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
///La ilaha illallahu muhammadur rosulullah
///number of coloum & number of row jodi same na hoy tahle mul kra jai na
///complexity n^3
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int i,j,k,m,n,p,q,sum=0;
    int m1[10][10],m2[10][10],mul[10][10];

    cout<<"number of rows and columns of 1st matrix:"<<endl;
    cin>>m>>n;
    cout<<"elements 1st matrix :"<<endl;
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            cin>>m1[i][j];

    cout<<"number of rows and columns of 2nd :"<<endl;
    cin>>p>>q;
    cout<<"elements 2nd :"<<endl;
    for (i=0;i<p;i++)
        for (j=0;j<q;j++)
            cin>>m2[i][j];

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            for (k=0;k<p;k++)
                sum=sum+m1[i][k]*m2[k][j];
            mul[i][j] = sum;
            sum = 0;

        }
    }
    cout<<"multiplication:"<<endl;
    for (i=0;i<m;i++) {
        for (j=0;j<q;j++)
            cout<<mul[i][j]<<' ';
    cout<<endl;
    }
    return 0;
}

