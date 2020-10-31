
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int map[105][105], sum[105][105];
int main(){
    int n, maxn;
    /* freopen("in.c", "r", stdin); */
    while(~scanf("%d", &n)){
        for(int i = 1;i <=n;i ++){
            for(int j = 1;j <= n;j ++){
                scanf("%d", &map[i][j]);
                sum[i][j] = sum[i-1][j] + sum[i][j-1] + map[i][j] - sum[i-1][j-1];
            }
        }
        maxn = -100000000;
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                for(int k = i+1;k <= n;k ++){
                    for(int p = j+1;p <= n;p ++)
                        maxn = max(sum[k][p]-sum[k][j-1]-sum[i-1][p] + sum[i-1][j-1], maxn);
                }
            }
        }
        printf("%d\n", maxn);
    }
    return 0;
}