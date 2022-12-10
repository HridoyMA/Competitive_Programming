#include<bits/stdc++.h>
#define int long long
#define M 1000000007
using namespace std;
int power(int n,int p)
{
    int ans=1;
    while(p)
    {
        if(p%2==0)
        {
            n*=n;
            n%=M;
            p/=2;
        }
        else
        {
            ans*=n;
            ans%=M;
            p--;
        }
    }
    return ans%M;
}
int fact(int n)
{
    int ans=1;
    for(int i=2; i<=n; i++)
    {
        ans*=i;
        ans%=M;
    }
    return ans%M;
}
signed main()
{
    int n,r;
    cin>>n>>r;
    int n1=fact(n);
    int r1=fact(r);
    int p=fact(n-r);
    int r3=power(r1,M-2);
    int p3=power(p,M-2);
    // cout<<n1<<endl<<r1<<endl<<p<<endl<<r3<<endl<<p3<<endl;
    int  ans=((n1%M * p3%M)%M * r3%M)%M;
    // int ans1=(ans%M * r3%M)%M;
    cout<<ans;
}
