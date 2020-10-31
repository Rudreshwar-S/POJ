#include<iostream>
#include<string>
#include<cstdio>  
#include<algorithm>
#include<cstring>
using namespace std;
void GetKMPNext(char *Str, int *Next, int Len)
{
	int i = 0;
	int j = -1;
	Next[i] = -1;
	while (i<Len)
	{
		if (j == -1 || Str[i] == Str[j])
		{
			i++;
			j++;
			Next[i] = j;
		}
		else
		{
			j = Next[j];
		}
	}
	return;
}
void StartPrint(int *Next, int Index)
{
	if (Next[Index] == 0)
	{
		return;
	}
	StartPrint(Next, Next[Index]);
	printf("%d ", Next[Index]);
}
int main()
{
	char Str[400001];
	int Next[400001];
	while (cin >> Str)
	{
		int Len = strlen(Str);
		GetKMPNext(Str, Next, Len);
		StartPrint(Next, Len);
		printf("%d\n", Len);
	}
	return 0;
}