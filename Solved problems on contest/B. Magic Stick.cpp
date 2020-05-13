#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b,c=0;
        cin>>x>>y;
        if(x>=y)
            cout<<"YES"<<endl;
        else
        {
            if(x%2==0)
                a=x;
            else
                a=x-1;
            b=(3*a)/2;
            if((b==a || b==x) && (b!=y))
                cout<<"NO"<<endl;
            else if(x%2==0 && b==x+1 && b!=y)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
}

