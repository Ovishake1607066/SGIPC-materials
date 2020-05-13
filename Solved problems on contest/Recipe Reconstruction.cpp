#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    ll t,a,b,c,d;
    string s;
    scanf("%lld",&t);
    loop
    {
        cin>>s;
        ll l=s.size();
        c=1;
        if(l%2==0)
        {
            for(ll j=l/2-1,k=l/2;j>=0;j--,k++)
            {
                if(s[j]=='?' && s[k]=='?')
                {
                    c=(c*26)%10000009;
                }
                else if((s[j]=='?'&&s[k]!='?')||(s[k]=='?'&&s[j]!='?')||(s[j]==s[k]))
                    c=c;
                else
                {
                    c=0;
                    break;
                }
            }
        }
        else
        {
            if(s[l/2]=='?')
                c=26;
            for(ll j=l/2-1,k=l/2+1;j>=0;j--,k++)
            {
                if(s[j]=='?' && s[k]=='?')
                {
                    c=(c*26)%10000009;
                }
                else if((s[j]=='?'&&s[k]!='?')||(s[k]=='?'&&s[j]!='?')||(s[j]==s[k]))
                    c=c;
                else
                {
                    c=0;
                    break;
                }
            }
        }
        printf("%lld\n",c);
    }
}
