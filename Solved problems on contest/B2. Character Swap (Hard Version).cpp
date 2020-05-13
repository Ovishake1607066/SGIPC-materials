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
    ll k;
    cin>>k;
    while(k--)
    {
        ll n,a=0,b=0,c=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                ll x=0;
                for(ll j=i+1;j<n;j++)
                {
                    if(s1[i]==s1[j])
                    {
                        v.push_back(make_pair(j,i));
                        swap(s1[j],s2[i]);
                        x=1;
                        break;
                    }
                    else if(s1[i]==s2[j])
                    {
                        v.push_back(make_pair(j,j));
                        v.push_back(make_pair(j,i));
                        swap(s1[j],s2[j]);
                        swap(s1[j],s2[i]);
                        x=1;
                        break;
                    }
                }
                if(x==0)
                {
                    a=1;
                    break;
                }
            }
        }
        if(a)
            cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
            cout<<v.size()<<endl;
            for(ll i=0;i<v.size();i++)
                cout<<v[i].first+1<<" "<<v[i].second+1<<endl;

        }
    }
}
