#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
const int maxn=1e5+5;
int link[maxn],vis[maxn];
int n,m;
vector<int>v[maxn];
bool dfs(int s)
{
    for(int i=0;i<v[s].size();i++)
    {
        int t = v[s][i];
        if(vis[t])continue;
        vis[t] = true;
        if(link[t] == -1 || dfs(link[t]))
        {
            link[t] = s;
            return true;
        }
    }
    return false;
}
int main()
{
    cin>>n>>m;int a,b;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        v[a].push_back(b+n);
    }
    memset(link, -1, sizeof link);
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        memset(vis, 0, sizeof vis);
        if(dfs(i)) sum++;
    }
    cout<<sum<<endl;
    return 0;
}