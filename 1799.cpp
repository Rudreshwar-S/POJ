#define _USE_MATH_DEFINES
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
    for(int i=0;i<t;i++)
    {
        float rad;
        int n;
        cin>>rad>>n;
        float res = (rad*sin(M_PI/n))/(1+sin(M_PI/n));
        cout<<"Scenario #"<<i+1<<":"<<endl;
        printf("%.3f\n", res);
        cout<<endl;
    }
}