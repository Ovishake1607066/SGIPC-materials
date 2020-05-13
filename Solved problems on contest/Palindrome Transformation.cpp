#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,p,a,b,c=0,d=1,e=0,f=1000000,g;
    cin>>n>>p;
    string s;
    cin>>s;
    if(n/2>=p)
        d=0;
    for(ll i=0; i<(s.size())/2; i++)
    {
        if(s[i]!=s[n-i-1])
        {
            c+=min(abs((ll)(s[i])-(ll)(s[n-i-1])), 26-abs((ll)(s[i])-(ll)(s[n-i-1])));
            //cout<<(ll)s[n-i-1]<<endl;
            //cout<<abs((ll)(s[i])-(ll)(s[n-i-1]))<<endl;
            if(d==0)
            {
                e=max(e,i+1);
                f=min(f,i+1);
            }
            else
            {
                e=max(e,n-i);
                f=min(f,n-i);
            }
        }
        //cout<<c<<endl;
    }
    if(f==1000000)
    {
        cout<<0<<endl;
        return 0;
    }
    //cout<<e<<"    "<<f<<endl;
    if(p<e)
    {
        if(p>f)
            c=c+(e-f)+min(p-f,e-p);
        else
            c+=(p-e);
    }
    else
    {
        c+=(p-f);
    }
    cout<<c<<endl;

}

