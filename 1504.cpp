#include<iostream>
#include <sstream> 
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=0;i<a;i++)
#define SORTV(a) sort(a.begin(),a.end())
#define REV(v) reverse(v.begin(),v.end())
#define pb push_back
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll res;
        string a,b;
        cin>>a>>b;
        REV(a);
        REV(b);
        stringstream number1(a);
        stringstream number2(b);
        ll numa,numb;
        number1>>numa;
        number2>>numb;
        res=numa+numb;
        while(res%10==0)
        {
            res/=10;
        }
        string str;
        ll rem,rev=0;
         while(res!=0)    
        {    
            rem=res%10;      
            rev=rev*10+rem;    
            res/=10;    
        }
        cout<<rev<<endl;
    }
}