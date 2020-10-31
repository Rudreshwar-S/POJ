#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define inf 0x3f3f3f3f
int n;
int dis[510][510];
int vis[510];
int prim()
{
	int minm,d[510],pos=0,sum=0;
	memset(d,inf,sizeof(d));
	memset(vis,0,sizeof(vis));
	vis[0]=1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dis[pos][j]<d[j]&&!vis[j])
			d[j]=dis[pos][j];
		}
		minm=inf;
		for(int j=0;j<n;j++)
		{
			if(minm>d[j]&&!vis[j])
			{
				pos=j;
				minm=d[j];
			}
		}
		vis[pos]=1; 
		sum+=minm;
	}
	return sum;
}
int main()
{
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&dis[j][i]);
			}
		}
		cout<<prim()<<endl;
	}
	return 0;
}