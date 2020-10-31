#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        long long a[22], res;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }    
        res=a[0];
        for(int i=1;i<n;i++)
        {
            res^=a[i];
        }
        if(res!=0)  puts("Yes");
        else puts("No");
    }
    return 0;
}