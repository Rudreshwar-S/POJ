#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    float sum;
    for(ll i=0;i<12;i++)
    {
        float a;
        cin>>a;
        sum+=a;
    }
    cout<<"$"<<sum/12<<endl;
}