#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int z=210;
const int inf=1<<30;
int cap[z][z],flow[z][z],d[z];
int n,m,tot;
void ek()
{
	int q[z],p[z],i;
	int front,rear;
	for(;;)
	{
		memset(d,0,sizeof(d));
		front=rear=0;
		q[rear++]=1;
		d[1]=inf;
		while(rear-front>0)
		{
			int u=q[front];
			for(i=1;i<=m;i++)
			{
				if(!d[i]&&cap[u][i]>flow[u][i])
				{
					p[i]=u;
					q[rear++]=i;
					d[i]=d[u]>(cap[u][i]-flow[u][i])?(cap[u][i]-flow[u][i]):d[u];
				}
			}
			front++;
		}
		if(!d[m]) break;
		int tem;
		for(tem=m;tem!=1;tem=p[tem])
		{
			flow[p[tem]][tem]+=d[m];
			flow[tem][p[tem]]-=d[m];
		}
		tot+=d[m];
	}
	return;
}
int main()
{
	while(cin>>n>>m)
	{
		int i,u,v,f;
		tot=0;
		memset(cap,0,sizeof(cap));
		memset(flow,0,sizeof(flow));
		for(i=0;i<n;i++)
		{
			cin>>u>>v>>f;
			cap[u][v]+=f;
		}
		ek();
		cout<<tot<<endl;
	}
	return 0;
}