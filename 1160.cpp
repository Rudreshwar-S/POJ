
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 int sum [305] [305];
int p[305];
 int dp [305] [305];
 
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        memset(dp,0x3f,sizeof(dp));
        memset(sum,0,sizeof(sum));
        p[0]=0;
 
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&p[i]);
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum[i][j]=sum[i][j-1]+p[j]-p[(i+j)/2];
            }
            dp[i][1]=sum[1][i];
            dp[i][i]=0;
        }
        for(int j=2;j<=k;j++)
        {
            for(int i=j+1;i<=n;i++)
            {
                for(int k=1;k<i;k++)
                {
                    dp[i][j]=min(dp[i][j],dp[k][j-1]+sum[k+1][i]);
                }
            }
        }
        printf("%d\n",dp[n][k]);
    }
    return 0;
}