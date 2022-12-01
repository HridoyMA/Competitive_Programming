#include<bits/stdc++.h>
#define nl "\n"
#define fa 	ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	set<ll>s;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
		s.insert(i);
		s.insert(n/i);
		}
	}
	vector<ll>v(s.begin(),s.end());
	for(auto x:v)cout<<x<<nl;
	return 0;
}
