#include<bits/stdc++.h>
using namespace std;

void printRev(int n)
{	
	if(n>10) return;
	printRev(n+1);

	printf("%d\n",n);
	
}

int main()
{
	int n=1;
	printRev(n);
	return 0;
}