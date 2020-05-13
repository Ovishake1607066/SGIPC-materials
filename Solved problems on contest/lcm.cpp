#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l 1000008
long long a[1000009],prime[1000009],p2[1000009];
int main()
{
    ll n,b,c,d,s=1,s1=1,e,m,p;
    for(ll i=3;i*i<=l;i+=2)
    {
        if(a[i]==0)
        {
            for(ll j=i*i;j<=l;j=j+(i*2))
                a[j]=1;
        }
    }
    prime[0]=2;
    for(ll i=3,j=1;i<=l;i+=2)
    {
        if(a[i]==0)
        {
            prime[j]=i;
            j++;
            e=j;
        }
    }
    p2[1]=1;
    while(cin>>n && n!=0)
    {
        s1=1;
        m=0;
            for(ll j=0;j<e && prime[j]<=n;j++)
            {
                //cout<<i<<endl;
                    if(prime[j]>m)
                        m=prime[j];
                    c=1;
                    d=1;
                    while(1)
                    {
                        d=prime[j]*d;
                        if(d>n)
                            break;
                        c++;
                    }
                        p2[prime[j]]=c-1;
                       //cout<<prime[j]<<endl;
            }
        if(p2[2] && p2[5])
        {
            s=min(p2[2],p2[5]);
            p2[2]=p2[2]-s;
            p2[5]=p2[5]-s;
        }
        for(ll x=1;x<=m;x++)
            {
                //cout<<p2[x]<<endl;
                if(p2[x])
                {
                    s=1;
                    while(p2[x])
                    {
                        s=s*x;
                        p2[x]--;
                    }
                    s1=s1*(s%10);
                    s1=s1%10;
                    //cout<<s1<<"   "<<s<<endl;
                }
            }
            //cout<<s1<<endl;
        s1=s1%10;
        cout<<s1<<endl;//<<m<<endl;
    }
}
