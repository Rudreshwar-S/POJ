#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<cstdio>
using namespace std;
double L,n,C,S;
bool check(double h)
{
    double r = (L*L + 4*h*h)/(8*h) ;
    double s = asin(L/(2*r))*2*r;
    if(S>s) return 1;
    return 0;
}
int main()
{
    while(cin>>L>>n>>C)
    {
        if(L==-1 && n==-1 && C==-1) break;
        S = L*(1 + n*C);
        double l=0, r=L/2, mid;
        while(r-l>1e-5)
        {
            mid = (l+r)/2;
            if(check(mid))  l=mid;      
            else r=mid;
        }
        double h = mid;
        cout<<fixed<<setprecision(3)<<h<<endl;
    }
}