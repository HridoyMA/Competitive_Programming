#include<bits/stdc++.h>
#define nl "\n"
#define fa 	ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;
void prime_fact(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i==0)
			{
				n/=i;
				cnt++;
			}
			cout<<i<<"^"<<cnt<<" ";
		}
	}
	if(n>1)cout<<n<<"^"<<1<<nl;
}
int main()
{
	int n;
	cin>>n;
	prime_fact(n);
	return 0;
}
