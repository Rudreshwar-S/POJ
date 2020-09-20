#include<iostream>
#include<string>
// #include<vector>
// #include<algorithm>
// #include<math.h>
// #include<iomanip>
using namespace std;
typedef long long ll;
int main()
{
    char s[100001],t[100001];
    int i,count;
    while(scanf("%s%s",s,t)!=EOF)
    {
        count=0;
        for(i=0;t[i]!='\0'&&s[count]!='\0';i++)
        {
            if(s[count]==t[i])
            {
                count++;
            }
        }
        if(s[count]=='\0')
                printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}