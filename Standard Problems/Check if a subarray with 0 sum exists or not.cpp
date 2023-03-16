#include<bits/stdc++.h>
#define int long long
#define nl "\n"
using namespace std;
signed main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	unordered_set<int>st;
	st.insert(0);
	int sum=0;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
		if(st.find(sum)!=st.end())
		{
			flag=true;
			break;
		}
		else
		{
			st.insert(sum);
		}
	}
	if(flag)cout<<"yes"<<nl;
	else
		cout<<"no"<<nl;

    return 0;
}

// 10
// 3 4 -7 3 1 3 1 -4 -2 -2
// yes
