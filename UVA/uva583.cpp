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
    char ch;
    char a[1000];
    int i=0,j;
    while(scanf("%c",&ch)==1)
    {
        if(ch==' '||ch=='\n')
        {
            for(j=i-1;j>=0;j--){
                printf("%c",a[j]);
            }
            i=0;
            printf("%c",ch);
        }
        else
        {
            a[i++]=ch;
        }
    }
    return 0;
}
