#include<iostream>
#include <cstdio>  
#include <algorithm>
#include<string>  
using namespace std;  
int a,b;  
int main()
{  
    while(cin>>a && cin>>b)
	{  
        if(a == 0 && b == 0)  
            break;  
        if(a < b)  
	    {
	    	swap(a,b);
		}  
        int flag = 0;  
        while(b)
		{  
            if(a%b==0 || a/b>=2)  
                break;  
            a -= b;  
            swap(a,b);  
            flag = !flag;  
        }  
        if(flag)  
        {
        	puts("Ollie wins"); 
		} 
        else  
        {
        	puts("Stan wins");
		}  
    }  
    return 0;  
}