#include<bits/stdc++.h>
#define int long long
#define nl "\n"
using namespace std;
signed main() {

	int n,k;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		if(mp.find(k-v[i])!=mp.end())
		{
			cout<<"GEt :"<<v[mp[k-v[i]]]<<" "<<v[i]<<nl;
			return 0;
		}
	mp[v[i]]=i;
	}
	cout<<"not get"<<nl;

    return 0;
}

// 6 10
// 8 7 2 5 3 1
// GEt :8 2
