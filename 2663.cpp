#include<iostream>
using namespace std;
int col[40];
int main()
{
    int n;
    while(cin>>n && n!=-1)
    {
        col[0]=1, col[2]=3;
        for(int i=4;i<=n;i++)
        {
            col[i] = 4*col[i-2]-col[i-4];
        }
        cout<<col[n]<<endl;
    }
}