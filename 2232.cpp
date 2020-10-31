#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, f, c, s, q;
	char t[3];
	while (scanf("%d", &n)==1)
	{
		f=c=s=0;
		q=n;
		while (q--)
		{
			cin>>t;
			if (t[0] == 'S')	s++;
			else if	(t[0] == 'C')	c++;
			else	f++;
		}
		int p = 0;
		if (s)	p++;
		if (c)	p++;
		if (f)	p++;
		if (p == 1 || p == 3)
		{
			printf("%d\n", n);
			continue;
		}
		if (!s)	printf("%d\n", f);
		else	if (!f)	printf("%d\n", c);
		else	printf("%d\n", s);
	}
	return 0;
}