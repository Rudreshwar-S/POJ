
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char q[100005][15];
int main()
{
	cin>>q[0];
	cout<<q[0]<<endl;
	int u = 0;
	int k = 1;
	int len;
	while(cin>>q[k])
	{
		len = 0;
		int str1 = strlen(q[k]);
		int str2 = strlen(q[k - 1]);
		for(int j = 0 ; j < min(str1,str2) ; j++)
		{
			if(q[k][j] == q[k - 1][j])
			{
				len++;
			}
			else
			{
				break;
			}
		}
		if(len > u)
		{
			u++;
			//cout<<u<<endl;
		}
		else
		{
			u = len;
			//cout<<u<<endl;
		}
		for(int i = 0 ; i < u ; i++)
		{
			cout<<' ';
		}
		cout<<q[k]<<endl;
		k++;
	}
}