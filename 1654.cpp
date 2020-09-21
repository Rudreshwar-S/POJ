#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<iomanip>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x1[10] = { 0, 1, 1, 1, 0, 0, 0, -1, -1, -1 };
        int y1[10] = { 0, -1, 0, 1, -1, 0, 1, -1, 0, 1 };
        ll area=0;
        if(s.size()<3) 
        { 
            printf("0\n"); 
            continue; 
        }
        ll x=0,y=0,x2=0,y2=0;
        for(int i=0;i<s.size()-1;i++)
        {
            x2 = x + x1[s[i] - '0'];
			y2 = y + y1[s[i] - '0'];
			area += (x2*y - x*y2);
			x = x2;
			y = y2;
        }
        if (area<0) area =(-area);
        if(area%2==0)
        {
            cout<<area/2<<endl;
        }
        else
        {
            cout<<area/2+0.5<<endl;
        }
    }
    return 0;
}