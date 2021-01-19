#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,t,n,sum,ck;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ck=n;
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
                {
                 sum=sum+i;
                }
        }
        if(sum==ck){
    printf("perfect\n");
        }
    else if(sum>ck){
        printf("abundant\n");
    }
    else{
        printf("deficient\n");
    }
    }
    return 0;
}
