#include<bits/stdc++.h>
#define nl "\n"
#define fa 	ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;
int Binary_Exponentiation(ll n,ll p)
{
	ll ans=1;
	while(p)
	{
		if(p%2==0)
		{
			n*=n;
			p/=2;
		}
		else
		{
			ans*=n;
			p-=1;
		}
	}
	return ans;
}
int main()
{
	ll n,p;
	cin>>n>>p;
	cout<<Binary_Exponentiation(n,p)<<nl;
	return 0;
}

