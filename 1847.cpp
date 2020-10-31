
#include<iostream>
#include<string>
#include<cstdio>  
#include<algorithm>
#include<cstring>
#define INF 1e9
using namespace std;
int d[108][108];
int main()
{
    int n,a,b;
    while(scanf("%d%d%d",&n,&a,&b)==3)
    {
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
     d[i][j]= i==j?0:INF;
    for(int i=1;i<=n;i++)
    {
        int k;
        scanf("%d",&k);
        for(int j=1;j<=k;j++)
        {
            int temp;
            scanf("%d",&temp);
            if(j==1) d[i][temp]=0;
            else d[i][temp]=1;
        }
    }
    for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
        if(d[i][j]>d[i][k]+d[k][j])
        {
            d[i][j]=d[i][k]+d[k][j];
        }
    }
    printf("%d\n",d[a][b]==INF?-1:d[a][b]);
    }
    return 0;
}