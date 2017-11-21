#include<bits/stdc++.h>
using namespace std;


typedef unsigned long long ull;

ull bigMod(ull b, ull p, ull m);

int main()
{
	ull a,b,c;
	printf("Enter values of base,power and mod:");
	cin>>a>>b>>c;

	ull res=bigMod(a,b,c);

	cout<<"The result is :"<<res<<endl;

	return 0;
}

ull bigMod(ull b,ull p, ull m)
{
	if(p==0)
	{
		return 1;
	}
	else if(p%2==0)
	{
		ull tmp=bigMod(b,p/2,m);
		return (tmp*tmp)%m;
	}
	else
	{
		ull p1=b%m;
		ull p2=bigMod(b,p-1,m);
		return (p1*p2)%m;
	}
}