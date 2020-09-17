#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n,counter=0;
        cin>>n;
        if(n>=5)
        {
            counter+=n/5;
        }
        if(n>=25)
        {
            counter+=n/25;
        }if(n>=125)
        {
            counter+=n/125;
        }
        if(n>=625)
        {
            counter+=n/625;
        }
        if(n>=3125)
        {
            counter+=n/3125;
        }
        if(n>=15625)
        {
            counter+=n/15625;
        }
        if(n>=78125)
        {
            counter+=n/78125;
        }
        if(n>=390625)
        {
            counter+=n/390625;
        }
        if(n>=1953125)
        {
            counter+=n/1953125;
        }
        if(n>=9765625)
        {
            counter+=n/9765625;
        }
        if(n>=48828125)
        {
            counter+=n/48828125;
        }
        if(n>=244140625)
        {
            counter+=n/244140625;
        }
        cout<<counter<<endl;
    }
}