#include<iostream>
#include<cstdio>
#include<string.h>
#include<string>
#include<cstring>
#include<algorithm>
 
using namespace std;
 
const int maxn = 205;
 
int g[maxn][maxn];
int n, m;
bool visit[maxn];
int mtch[maxn];
int dfs(int cow){
	for(int i = 1; i <= m; ++i){
		if(g[cow][i] && !visit[i]){
			visit[i] = true;
			if(mtch[i] == 0 || dfs(mtch[i])){
				mtch[i] = cow;
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	while(scanf("%d%d",&n, &m) != EOF){
	memset(g, 0, sizeof(g));
	memset(mtch, 0, sizeof(mtch));
	int num, obj;
	for(int i = 1; i <= n; ++i){
		scanf("%d", &num);
		for(int j = 1; j <= num; ++j){
			scanf("%d",&obj);
			g[i][obj] = 1;
		}
	}
	int s = 0;
	for(int i = 1; i <= n; ++i){
		memset(visit, 0, sizeof(visit));
		if(dfs(i)){	
			++s;
		}
	}
	cout << s << endl;
	}
	return 0;
}