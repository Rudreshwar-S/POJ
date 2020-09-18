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
    double x1,y1,x2,y2,x3,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        double midx1,midx2,midy1,midy2;
        midx1 = (x1+x2)/2;
        midy1 = (y1+y2)/2;
        midx2 = (x2+x3)/2;
        midy2 = (y2+y3)/2;
        double grad1, grad2,x,y;
        if(y2==y1)
        {
            grad2 = (x2-x3)/(y3-y2);
            x = midx1;
            y = midy2 + grad2*(x - midx2);
        }
        else if(y2==y3)
        {
           grad1 = (x1-x2)/(y2-y1);
           x = midx2;
           y = midy1 + grad1*(x - midx1); 
        }
        else
        {
            grad1 = (x1-x2)/(y2-y1);
            grad2 = (x2-x3)/(y3-y2);
            x = (midy2 - midy1 + midx1*grad1 - midx2*grad2)/(grad1 - grad2);
            y = midy1 + grad1*(x - midx1);
        }
        double sqRad;
        sqRad = (x-x1)*(x-x1) + (y-y1)*(y-y1);
        double radius;
        radius = sqrt(double(sqRad));
        printf("%.2f\n", 2*M_PI*radius);
    }
}