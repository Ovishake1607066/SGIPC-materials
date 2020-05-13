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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,b=0,c=0,d;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='+' && a==0)
        {
            c=1;
            a=1;
        }
        else if(a)
        {
            if(s[i]=='-')
                c--;
            else
                c++;
            if(c<0)
                c=0;
        }
    }
    cout<<c<<endl;

}
