#include<bits/stdc++.h>
using namespace std;


long factorial(long n)
{
	if(n==0)
	{
		return 1;
	}
	else 
	{
		return n*factorial(n-1);
	}
}

int main()
{
	printf("Enter a number:");
	long N;
	scanf("%ld",&N);

	long result=factorial(N);

	cout<<N<<"! = "<<result<<endl;

	return 0;
}