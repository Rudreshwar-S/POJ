#include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
int isPrime(long n)
{
    int k=1;
    if(n==2 || n==3)    return 1;
    for(long i=2;i<=sqrt((double)n);i++)
    {
        if(n%i==0)
        {
            k=0;
            i=n;
        }
    }
    return k;
}
int main()
{
    long n,i;
    while(cin>>n&&n)
    {
        for(i=2;i<=n/2;i++)
        {
            if(isPrime(i)&&isPrime(n-i))
            {
                printf("%ld = %ld + %ld\n",n,i,n-i);
                break;
            }
        }
    }
}