#include <iostream>
#include <stdio.h>
#include <algorithm>
#define  maxn 1010
using namespace std;
int main()
{
    int t,a[maxn];
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        a[0]=0;
        sort(a+1,a+n+1);
        for(int i=n; i>0; i=i-2)
        {
            sum^=(a[i]-a[i-1]-1);
        }
        if(sum)printf("Georgia will win\n");
        else printf("Bob will win\n");
    }
}