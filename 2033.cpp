
#include<iostream>
#include<string>
#include<cstdio>  
#include<algorithm>
#include<cstring>
 
using namespace std;
 
long long dp[1000001];
int n;
 
void read(){
	int i,j,k;
	char c[1000001];
	while(1){
		cin>>c;
		n=strlen(c);
		if(strcmp(c,"0")==0)
			return;
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(i=1;i<n;i++)
		{
			if(c[i]!='0')
				dp[i]+=dp[i-1];
			
				if(c[i-1]=='1'||(c[i-1]=='2'&&c[i]<='6'))
				{
					if(i>=2)
						dp[i]+=dp[i-2];
					else
						dp[i]++;
				}
			
		}
		cout<<dp[n-1]<<endl;
	}
}
int main()
{
	read();
	return 0;
}