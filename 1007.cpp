#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int unsortedness(string s)
{
    ll count=0;
    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]>s[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    ll a,n;
    cin>>a>>n;
    vector<string> v;
    vector<int> vec,res;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        int val = unsortedness(s);
        vec.push_back(val); 
        res.push_back(val);
    }
    sort(res.begin(),res.end());
    int k = vec.size();
    for(int i=0;i<k;i++)
    {
        int j=0;
        while(j<k)
        {
            if(vec[j]==res[i])
            {
                cout<<v[j]<<endl;
                j++;
                break;
            }
            j++;
        }
    }
    return 0;
}