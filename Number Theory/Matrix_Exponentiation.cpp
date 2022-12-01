#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define N 101
ll arr[N][N],ans[N][N];
void mul(ll A[][N],ll B[][N],ll n)
{
	ll C[n+1][n+1];
	ll i,j,k;
	for( i=1;i<=n;i++)
	{
		for( j=1;j<=n;j++)
		{
			C[i][j]=0;
			for( k=1;k<=n;k++)
			{
				ll x=A[i][k]*B[k][j];
				C[i][j]+=x;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			A[i][j]=C[i][j];
		}
	}
}
void power(ll A[][N],ll n,ll p)
{
	while(p)
	{
		if(p%2==0)
		{
			mul(A,A,n);
			p/=2;
		}
		else
		{
			mul(ans,A,n);
			p-=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			A[i][j]=ans[i][j];
		}
	}

}
int main()
{
	ll n,p;
	cin>>n>>p;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j)ans[i][j]=1;
			else
				ans[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>arr[i][j];
		}
	}
	power(arr,n,p);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
