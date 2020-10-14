#include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
using namespace std;
typedef long long ll;
int tri[105][105];
int main()
{
    ll n;
    ll len;
    cin>>len;
    for(int i=1;i<=len;i++)
    {
        int k=i;
        while(k>0)
        {
            cin>>n;
            tri[i][k]=n;
            k--;
        }
    }
    for(int i=len;i>1;i--)
    {
        for(int j=1;j<=i;j++)
        {
             tri[i-1][j-1]+=max(tri[i][j-1],tri[i][j]);
        }
    }
    cout<<tri[1][1]<<endl;
}