
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char word[4][100];		
    int statistic[27]={0};
    int i,j,k;
    int max=0;
 
    for(i=0;i<4;i++)//enter four lines of letters
    gets(word[i]);
 
 
         for(i=0;i<4;i++)//Number of statistical letters
        for(j=0;word[i][j]!='\0';j++)
            for(k=1;k<=26;k++)
                if(int(word[i][j]-64)==k)
                    statistic[k]++;
 
         for(i=1;i<=26;i++)//maximize
        if(max<statistic[i])
            max=statistic[i];
    max++;
    
    char column[28][100];
         for(i=1;i<=26;i++) column[i][0]=char(i+64);//store the letters of the abscissa
 
         for(i=1;i<=26;i++)//Statistics "*" by number of letters
    {
        for(j=1;j<=max;j++)
        {
            if(j<=statistic[i])	column[i][j]='*';
            else	column[i][j]=' ';
        }
    }
 
           for(j=max-1;j>=0;j--)
     {
         for(i=1;i<=26;i++)
         {
             if(i<26)	cout<<column[i][j]<<" ";
             else cout<<column[i][j];
         }
       	 if(j>0)	cout<<endl;
     }
    return 0;
}
