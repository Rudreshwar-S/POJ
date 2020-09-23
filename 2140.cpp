#include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,sum,count=0;
    scanf("%d",&n);
    for(i=n/2+1;i>=1;i--)
    {
        sum=0;
        j=i;
        while(sum<n)
        {
            sum+=j;
            j--;
        }
        if(sum==n)
            count++;
    }
    cout<<count+1<<endl;
    return 0;
}
