#include<iostream>
#include<stdio.h>
using namespace std;
int t,n,a;
int main()
{
   cin>>t;
   while(t--)
   {
        scanf("%d",&n);
        int ant=0;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            ant^=a;
            if(a!=1)
            {
                flag=false;
            }
        }
        if(flag)
        {
            if(n%2==0)
                printf("John\n");
            else
                printf("Brother\n");
        }
        else
        {
            if(ant)
                printf("John\n");
            else
                printf("Brother\n");
        }
   }
}
