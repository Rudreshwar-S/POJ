#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	long long n;
	while(cin>>n)
	{
		while(n>18)
		{
			n=ceil(n/18.0);
		}
		if(n<=9) cout<<"Stan wins."<<endl;
	    else cout<<"Ollie wins."<<endl;
	}
}