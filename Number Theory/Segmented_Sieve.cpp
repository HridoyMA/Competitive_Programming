#include<bits/stdc++.h>
#define int long long
using namespace std;
/*string d_to_b(int n)
{
	string s="";
    for (int i = 32; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            s+='1';
        else
            s+='0';
    }
    return s;
}
int s_to_int(string s)
{
	int  num=0;
	for(int i=0;i<s.size();i++)
	{
		num=(num*10) + (s[i]-'0');
	}
	return num;
}
int power(int n,int p)
{
	int ans=1;
	while(p)
	{
		if(p%2==0)
		{
			n*=n;
			p/=2;
		}
		else
		{
			ans*=n;
			p--;
		}
	}
	return ans;
}
int gcd(int a,int b)
{
	int r;
	while(b)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}*/
const int N=1e6+7;
int arr[N];
int siv(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                arr[j]=1;
            }
        }
    }
}
int seg_siv(int l,int r,vector<int>v1)
{
    if(l==1)
        l++;
    int n=r-l+1;
    vector<int>v(n+1,0);
    for(int i=0; i<v1.size(); i++)
    {
        int j=(l/v1[i])*v1[i];
        if(j<l)
            j+=v1[i];
        for(; j<=r; j+=v1[i])
        {
            if(j!=v1[i])
                v[j-l]=1;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==0)
            cout<<l+i<<endl;
    }
}
signed main()
{
    int l,r;
    cin>>l>>r;
    siv(100000);
    vector<int>v;
    for(int i=2; i*i<=r; i++)
    {
        if(arr[i]==0)
            v.push_back(i);
    }
    seg_siv(l,r,v);

}
