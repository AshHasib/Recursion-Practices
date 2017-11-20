#include<bits/stdc++.h>
using namespace std;


void printArray(int a[],int s,int l)
{
	if(s>=l)
		return;
	printf("%d\n",a[s]);

	printArray(a,s+1,l);
}

int main()
{
	int N;
	printf("Enter size of the array:");
	scanf("%d",&N);

	int  A[N];
	printf("Enter elements:");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Printing the elements using recursive function\n");

	printArray(A,0,N);
	
	return 0;
}