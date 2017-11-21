#include<bits/stdc++.h>
using namespace std;


int fibonacci(int n)
{
	if(n<=1)
	{
		return n;
	}
	else return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	int i=1;
	printf("The fibonacci series from 1 to 10 is :\n");

	while(i<=10)
	{
		printf("%d\t",fibonacci(i));
		i++;
	}
	printf("\n");
}