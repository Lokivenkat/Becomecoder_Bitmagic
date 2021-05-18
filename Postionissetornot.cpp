#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,position;
	cin>>n;
	cout<<"position:";
	cin>>position;
	if(n&((position-1)<<1))
	{
		cout<<"it is set bit";
	}
	else
	{
		cout<<"it is not set bit";
	}
}
