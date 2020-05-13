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
    string s;
    ll a,b=0,c=0,d=0,e=0;
    cin>>s;
    ll n=s.size();
    string t="";
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='p' && !b)
        {
            t+="p://";
            b=1;
        }
        else if(s[i]=='r' && s[i+1]=='u' && i+1<n && !c && e)
        {
            t+=".ru";
            c=1;
            i++;
        }
        else if(c && !d)
        {
            t+="/";
            d=1;
                        string xx(1,s[i]);
            t+=xx;
        }
        else
        {
            if(b)
                e=1;
            string xx(1,s[i]);
            t+=xx;
        }
    }
    cout<<t<<endl;
}

