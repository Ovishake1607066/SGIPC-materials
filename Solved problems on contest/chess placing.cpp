#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],a2[110]= {0},a3[110]= {0},b,c1=0,c2=0,d=0,e=0,f,g,d1=0,e1=0;
    for(ll i=1; i<=n/2; i++)
    {
        cin>>f;
        a[i]=f;
        a2[f]++;
        a3[f]++;
    }
    for(ll i=0;i<110;i++)
        cout<<a2[i]<<endl;
    for(ll i=1; i<=n/2; i++)
    {
        if(a[i]%2==0)
        {
            d=0;
            for(ll j=a[i],k=1; ; k+=2)
            {
                if(d1==2)
                    break;
                if(j+k>n && j-k<1)
                    break;
                if(!a2[j-k] && j-k>0)
                {
                    cout<<a[i]<<j-k<<endl;
                    a2[j-k]++;
                    c1=c1+abs(a[i]-j+k);
                    d=1;
                    break;
                }
                if(!a2[j+k] && j+k<=n)
                {
                    cout<<a[i]<<j+k<<endl;
                    a2[j+k]++;
                    c1=c1+abs(a[i]-j-k);
                    d=1;
                    break;
                }
            }
            if(d==0)
            {
                d1=2;
                c1=100000;
            }
        }
        else
        {
            if(a[i]==1)
                g=3;
            else
                g=a[i];
                e=0;
            for(ll j=g,k=1; ; k+=2)
            {
                if(e1==2)
                    break;
                if(j+k>n && j-k<1)
                    break;
                if(!a3[j-k] && j-k>0)
                {
                    a3[j-k]++;
                    cout<<a[i]<<j-k<<endl;
                    c2=c2+abs(a[i]-(j-k));
                    e=1;
                    break;
                }
                if(!a3[j+k] && j+k<=n)
                {
                    cout<<a[i]<<j+k<<endl;
                    a3[j+k]++;
                    c2=c2+abs(a[i]-(j+k));
                    e=1;
                    break;
                }
            }
            if(e==0)
            {
                e1=2;
                c2=100000;
            }
        }
        cout<<c1<<c2<<endl;
    }
    cout<<min(c1,c2)<<endl;
}
