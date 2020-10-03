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
    string tree;
    float i=0;
    map<string,float> treeOfMap;
    map<string,float>::iterator itr;
    while(getline(cin,tree))
    {
        i++;
        itr = treeOfMap.find(tree);
        if(itr==treeOfMap.end())
        {
            treeOfMap[tree]=1;
        }
        else
        {
            treeOfMap[tree]+=1;
        }
    }
    map<string, float>::iterator itr2 = treeOfMap.end();
    for(itr=treeOfMap.begin();itr!=itr2;itr++)
    {
        printf("%s %0.4f\n",itr->first.c_str(), (itr->second)*100.0/i);
    }
}