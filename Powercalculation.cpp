#include<bits/stdc++.h>
using namespace std;
int main()
{
	int base,exp,res=1;
	cout<<"base:";
	cin>>base;
	cout<<"exponent:";
	cin>>exp;
	while(exp)
	{
		if(exp&1==1)
		{
			res=res*base;
		}
		exp=exp>>1;
		base=base*base;
	}
	cout<<res;
}
