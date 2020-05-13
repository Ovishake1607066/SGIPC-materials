#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b,c,d,e,x;
    while(cin>>n)
    {
        d=1;
        e=n;
        x=n;
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                a=1;
                while(n%i==0)
                {
                    n=n/i;
                    a++;
                }
                d=d*a;
                e=e-(e/i);
            }
        }
        if(n>1)
        {
            d=d*2;
            e=e-(e/n);
        }
        cout<<(x-e-d+1)<<endl;
    }
}
