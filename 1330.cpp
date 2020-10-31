#include<iostream>
#include<cstdio> 
#include<vector>
using namespace std;
const int N = 1e4 + 10;
vector<int> a[N];
int x,y;
int f[N],in[N],visited[N];
int find (int x) // disjoint-set
{
	if(x == f[x]) return x;
	return f[x] = find(f[x]);
}
bool tarjan(int u)
{
	visited[u] = 1;
	for(int i = 0; i < a[u].size(); i++) {
		int v = a[u][i];
		if(!visited[v]) {
			if(tarjan(v)) return true;
			f[v] = u;
		}
	}
	if(x == u || y == u) {
		int v = u == x ? y : x;
		if(visited[v]) {
			int fa = find(v);
			printf("%d\n",fa);
			 return true; // found a direct return
		} 
	}
	return false;
}
int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--) {
		scanf("%d",&n);
		 for (int i = 1; i <= n; i ++) {// Initialization
			a[i].clear(); 
			f[i] = i;
			visited[i] = in[i] = 0;
		}
		int u,v;
		for(int i = 1; i < n; i++) {
			scanf("%d%d",&u,&v);
			 a [u] .push_back (v); // save only one direction
			in[v]++; 
		}
		scanf("%d%d",&x,&y);
		int root;
		for(int i = 1; i <= n; i++)
			 if (! in [i]) {// find the point of 0 degree, i.e., the root
				root = i;
				break;
			}
		tarjan(root);
	} 
	return 0;	
}