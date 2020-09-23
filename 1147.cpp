#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include <climits>
#include<vector>
using namespace std;
int n,c0,c1;
const int N = 3100;
int a[N],b[N],c[N],nextval[N];
int main(){
	scanf("%d",&n);
	c0=c1=0;
	for(int i=1;i<=n;i++)
    {
		scanf("%d",a+i);
		if(a[i]) c[++c1] = i;
		else b[++c0] = i;
	}
	for(int i=1;i<=n;i++)
    {
		if(i<=c0) nextval[i] = b[i];
		else nextval[i] = c[i-c0];
    }
	int k=1;
	for(int i=1;i<=n;i++)
    {
		if(i>1)
        { 
            printf(" ");
        }
		printf("%d",k<=c0?0:1);
		k = nextval[k];
	}
    printf("\n");
	return 0;
}