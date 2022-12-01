#include<bits/stdc++.h>
#define nl "\n"
#define fa 	ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;
bool prime_check(ll n)
{
	if(n<2)return false;
	if(n<=3)return true;
	if(n%2==0)return false;
	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0)return false;
	}
	return true;
}
int main()
{
    fa
	ll n;
	cin>>n;
	if(prime_check(n))cout<<"YES"<<nl;
	else
        cout<<"NO"<<nl;
	return 0;
}
