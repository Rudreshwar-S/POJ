
#include<iostream>
#include<fstream>
 
using namespace std;
 
int a[10001];
int b[10001];
int c[10001];
int n;
 
void read(){
//	ifstream cin("in.txt");
	int i,j,k;
	int ans=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
	{
		b[i]=b[i-1]+a[i];
		if(b[i]%n==0)
		{
			cout<<i<<endl;
			for(j=1;j<=i;j++)
				cout<<a[j]<<endl;
			return;
		}
	}
	for(i=1;i<=n;i++)
	{
		
		if(c[b[i]%n])
		{
			cout<<i-c[b[i]%n]<<endl;
			for(j=c[b[i]%n]+1;j<=i;j++)
				cout<<a[j]<<endl;
			return;
		}
		c[b[i]%n]=i;
	}
}
 
 
int main(){
	read();
	return 0;
}