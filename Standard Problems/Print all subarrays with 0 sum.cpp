#include<bits/stdc++.h>
#define int long long
#define nl "\n"
using namespace std;
signed main() {

	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	unordered_multimap<int,int>mp;
	mp.insert({0,-1});
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
		if(mp.find(sum)!=mp.end())
		{
			auto it=mp.find(sum);
			while(it!=mp.end() and it->first==sum)
			{
				cout<<it->second+1<<" "<<i<<nl;
				it++;
			}
		}
		mp.insert({sum,i});
	}

    return 0;
}

// input
// 10
// 3 4 -7 3 1 3 1 -4 -2 -2
// output
// 0 2
// 1 3
// 2 5
// 5 7
// 3 9
// 0 9
