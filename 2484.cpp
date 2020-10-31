#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        if(n>=3)    puts("Bob");
        else    puts("Alice");
    }
    return 0;
}