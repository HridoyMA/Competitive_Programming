#include<bits/stdc++.h>
#define int long long
using namespace std;
int co_prime(int n)
{
	int ans=n;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n/=i;
			}
			ans*=(i-1);
			ans/=i;
		}
	}
	if(n>1)
	{
		ans*=(n-1);
		ans/=n;
	}
	return ans;
}
signed main()
{
	int n;
	cin>>n;
	cout<<co_prime(n);
}
