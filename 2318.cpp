#include<iostream>
#include<string.h>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<math.h>
#include<cstdio>
using namespace std;

struct Pt{
    int x,y;
};
Pt operator-(const Pt& p1,const Pt& p2)
{
    Pt p;
    p.x=p1.x-p2.x;
    p.y=p1.y-p2.y;
    return p;
}
int cross(const Pt& p1,const Pt& p2)
{
    return p1.x*p2.y-p2.x*p1.y;
}
int n,m,x1,x2,yy,y2;
struct Card
{
    Pt u,l;
}cards[5000];
int cnt[5001];

void throw_toy(Pt p)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(cross(cards[i].u-cards[i].l,p-cards[i].l)>0) break;
    }
    cnt[i]++;
}
int main()
{
    int u,l;
    int x,y;
    while(scanf("%d",&n),n){
        memset(cnt,0,sizeof(cnt));
        scanf("%d%d%d%d%d",&m,&x1,&yy,&x2,&y2);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&u,&l);
            cards[i].u.x=u,cards[i].u.y=yy;
            cards[i].l.x=l,cards[i].l.y=y2;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
            Pt p;
            p.x=x,p.y=y;
            throw_toy(p);
        }
        
        for(int i=0;i<=n;i++)
            printf("%d: %d\n",i,cnt[i]);
        printf("\n");
    }
    return 0;
}