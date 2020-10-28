#include<iostream>
#include<string>
#include<iterator>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>
using namespace std;
typedef long long ll;
const int N=1e5+7;
int fa[N],dis[N]; 
int find(int x) {
	if(x==fa[x]) return x;
	int t=fa[x];
	fa[x]=find(fa[x]);
	dis[x]=(dis[x]+dis[t])%2;
	return fa[x];
}
void Union(int x,int y) {
	int fx=find(x);
	int fy=find(y);
	fa[fy]=fx;
	dis[fy]=(dis[y]+1-dis[x])%2;
} 
int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int n,m;
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++) fa[i]=i;
		for(int i=1;i<=n;i++) dis[i]=0;
		while(m--) {
			char opt[3];
			int x,y;
			scanf("%s%d%d",opt,&x,&y);
			if(opt[0]=='D') {
				Union(x,y);
			}
			else if(opt[0]=='A') {
				int fx=find(x);
				int fy=find(y);
				if(fx!=fy) puts("Not sure yet.");
				else if(dis[x]^dis[y]) puts("In different gangs.");
				else puts("In the same gang.");  
			}
		}
	}
	return 0;
}