
#include <iostream>
#include <cmath>
#include<cstdio>
using namespace std;
 
int main()
{
	int n,i;
 
	while (scanf("%d", &n) && n)
	{
		int a, b;
		int estArrive = 0x7fffffff;
 
		for(i=1;i<=n;i++)
		{
			scanf("%d%d", &a, &b);
			if (b>=0)
			{
				int t = ceil(4500.0/(a*5/18.0)+b);
				if (t<estArrive)
					estArrive = t;
			}
		}
		printf("%d\n", estArrive);
	}
 
	return 0;
}