#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<q;i++)
#define loop2 for(ll j=0; ;j++)
using namespace std;
int main()
{
    ll n,h,a,b,q,ta,fa,tb,fb,c,d,e;
    cin>>n>>h>>a>>b>>q;
    loop
    {
        c=0;
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb)
            cout<<abs(fa-fb)<<endl;
        else
        {
            if(fa>=a && fa<=b)
            {
                c+=abs(tb-ta);
                c+=abs(fb-fa);
                cout<<c<<endl;
            }
            else
            {
                if(fa<a)
                    {
                        c+=abs(a-fa);
                        fa=a;

                    }
                else
                    {
                        c+=abs(fa-b);
                        fa=b;

                    }
                    //cout<<c<<fa<<endl;
                c+=abs(tb-ta);
                c+=abs(fb-fa);
                cout<<c<<endl;
            }
        }
    }
}
