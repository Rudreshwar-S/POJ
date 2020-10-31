#include<iostream>
#include <cstdio>  
#include <algorithm>
#include<string> 
#include <cstring>
using namespace std;
int main()
{
	int n,num[105],i,m,f;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		memset(num,0,sizeof(num));
		for(i=1;i<=n;i++)
		{
			scanf("%d",&m);
			num[m]++;
		}
		if(n%2==1)
			printf("1\n");
		else
		{
			f=0;
			for(i=1;i<=100;i++)
				if(num[i]%2==1)
				{
					f=1;
					printf("1\n");
					break;
				}
			if(f==0)
				printf("0\n");
		}
	}
	return 0;
}