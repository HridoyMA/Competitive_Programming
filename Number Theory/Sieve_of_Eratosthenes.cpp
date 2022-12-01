#include<bits/stdc++.h>
#define nl "\n"
#define fa 	ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;
int const N=1e8+10;
int arr[N];
vector<int>v;
void siv(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)arr[j]=1;
		}
	}
}
int main()
{
    fa
	ll n;
	cin>>n;
	siv(n);
	cout<<2<<" ";
	for(int i=3;i<=n;i+=2)
	{
		if(arr[i]==0)cout<<i<<" ";
	}
	cout<<nl;
	return 0;
}

