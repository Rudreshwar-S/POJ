#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int flag=0;
void result(unsigned long long m, ll n, ll k)
{
	if (flag) 
    {
		return;
	}
	if (m%n==0) 
    {
		flag=1;
		cout<<m<<endl;
		return;
	}
	if (k>19) 
    {
		return;
	}
	result(m*10, n, k+1);
	result(m*10+1, n, k+1);
}
int main()
{
	int n;
	while (cin >> n, n)
	{
		flag = 0;
		result(1,n,1);
	}
	return 0;
}