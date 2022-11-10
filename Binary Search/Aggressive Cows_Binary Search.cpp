//Aggressive Cows | Binary Search
//Largest minimum distance
#include<bits/stdc++.h>
#define int long long
#define n1 "\n"
using namespace std;
bool has(vector<int>v,int n,int x,int dist)// v(shop number), n(number of shop), x(number of cow),  dist(take mid as a minimum distance between two cow
// and check whether all cows can place in shops
{
	int first=v[0];
	int count=1;
	for(int i=0;i<n;i++)
	{
		if(v[i]-first>=dist)
		{
			first=v[i];
			count++;
		}
		if(count==x)return true;
	}
	return false;
}
signed main()
{
	int n,x;
	cin>>n>>x;// 5 3
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];// 1 2 4 8 9
	}
	int l=1;
	int ans=0;
	int r=v[n-1]-v[0];
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(has(v,n,x,mid))
		{
			ans=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	cout<<r<<endl;// 3

}
