
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=5002;
const int inf=1<<30;
char s[maxn],p[maxn];
int f[2][maxn];
int main()
{
	int n;
	while(cin>>n)
	{
		getchar();
		int i,j;
		char c;
		for(i=1;i<=n;i++)
		{
			scanf("%c",&c);
			s[i]=c;p[n+1-i]=c;
		}
		s[n+1]='\0';p[n+1]='\0';
		memset(f,0,sizeof(f));
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				f[i%2][j]=inf;
				if(s[i]==p[j])
					f[i%2][j]=f[(i-1)%2][j-1]+1;
				else
					f[i%2][j]=f[(i-1)%2][j]>f[i%2][j-1]?f[(i-1)%2][j]:f[i%2][j-1];
			}
		}
		cout<<n-f[n%2][n]<<endl;
	}
	return 0;
}