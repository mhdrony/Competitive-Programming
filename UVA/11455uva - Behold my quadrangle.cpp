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
    int a,b,c,k,i,t;

    while(scanf("%d",&t)==1)
    {
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&k);
    if(a==b && b==c && c==k)
        printf("square\n");
    else if((a==b && c==k) || (b==c && a==k) || (a==c && b==k))
        printf("rectangle\n");
    else if((a<=b+c+k) && (b<=a+c+k) && (c<=a+b+k) && (k<=a+b+c))
        printf("quadrangle\n");
        else
            printf("banana\n");
}
}
return 0;
}
