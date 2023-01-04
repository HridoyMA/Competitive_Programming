#include<bits/stdc++.h>
#define int long long
#define nl "\n"
const int m=1e9+9;
const int p=31;
using namespace std;
long long hsh(string s,int n)
{
	int hs=0;
	int x=1;
	for(int i=0;i<n;i++)
	{
		hs=((hs)+(s[i] - 'a' + 1) * x)%m;
		x=(x*p)%m;
	}
	return hs;
}
vector<int> hsh_ar(string s,int n)
{
	vector<int>hs(n+2);
	int x=1;
	for(int i=1;i<=n;i++)
	{
		hs[i]=((hs[i-1])+(s[i-1] - 'a' + 1) * x)%m;
		x=(x*p)%m;
	}
	return hs;
}
signed main()
{
	string s1,s2;
	cin>>s1>>s2;
	int pat=hsh(s2,s2.size());
	vector<int>v=hsh_ar(s1,s1.size());
	int x=1,p=31;
	for(int i=0;i<s1.size();i++)
	{
		int current=(v[i+s2.size()] - v[i] + m)%m;
		if(current==((pat*x)%m))cout<<"Yes"<<nl;
		x=(x*p)%m;
	}

}

/*
input:
abCdef
abCd

output:
yes
*/
