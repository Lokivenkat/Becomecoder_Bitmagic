#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,position,res;
	cin>>n;
	cout<<"position:";
	cin>>position;
	res=(n^((position-1)<<1));
	cout<<res;
}
