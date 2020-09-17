#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    float sum,temp=1;
    vector<float> v;
    while(temp!=0.00)
    {
        float a;
        cin>>a;
        v.push_back(a);
        temp=a;
    }
    for(int j=0;j<v.size()-1;j++)
    {
        for(float i=2;i<2000;i++)
        {
            sum+=1/i;
            if(sum>=v[j])
            {
                cout<<i-1<<" card(s)"<<endl;
                sum=0;
                break;
            }
        }
    }
    return 0;
}