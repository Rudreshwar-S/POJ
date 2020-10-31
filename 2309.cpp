#include<iostream>
using namespace std;
typedef long long ll;
ll lowbit(ll x)
{
         return x&(-x);
}
int main()
{
    int t;
    ll n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
 
        k=lowbit(n);
 
        cout << n-k+1 << " " << n+k-1 << endl;
    }
    return 0;
}
