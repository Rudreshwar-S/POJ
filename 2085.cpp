
#include <iostream>
 
using namespace std;
 
int main()
{
    int n, seq, i, j;
    while(scanf("%d%d", &n, &seq) && (n + seq) != -2)
    {
        int total = 0;
        for(i = n; i >= 1; i--)
        {
            total += n - i;
            if(total >= seq) break;
        }
        for(j = 1; j < i; j++) printf("%d ", j);
        int k = seq + i - (n - i) * (n - i - 1) / 2;
        printf("%d ", k);
        for(j = n; j >= i; j--)
            if(j != k)
                printf("%d ", j);
        printf("\n");
    }
    return 0;
}