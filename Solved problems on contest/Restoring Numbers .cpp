#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll s,g,a,b,c,d;
    cin>>s>>g;
    if(s==g)
        cout<<s<<" "<<0<<endl;
    else if(g==1)
        cout<<s-1<<" "<<1<<endl;
    else
    {
        if(s%g!=0 || s==1)
            cout<<-1<<endl;
        else
        {
            a=s/2;
            b=s;
            c=0;
            while(1)
            {
                b=b-g;
                c=c+g;
                if(__gcd(b,c)==g)
                {
                    cout<<b<<" "<<c<<endl;
                    return 0;
                }
                if(c>a)
                    break;
            }
            cout<<-1<<endl;
        }
    }
}
