#include<bits/stdc++.h>
using namespace std;


int sum(int a[],int start,int end)
{
	if(start==end)
	{
		return a[start];
	}
	else
	{
		return a[start]+sum(a,start+1,end);
	}
}

int main()
{
	int A[1000];
	int N;
	int i;

	printf("Enter the size of the array:");
	scanf("%d",&N);
	printf("Enter elements:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	int S=sum(A,0,N-1);
	printf("The sum of the array elements is:%d\n" , S);

	return 0;
}