#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll a,b,c,d,l;
    l=s.size();
    if(l==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(l%2==0)
    {
        a=l/2-1;
        b=l/2;
        c=0;
        for(ll i=1; ;i++)
        {
            if(s[a--]==s[b++])
                c=1;
            else
                {
                    //cout<<s[a]<<s[b]<<endl;
                    cout<<l<<endl;
                    return 0;
                }
            if(b==l)
                break;
        }
            d=0;
            for(ll i=0;i<l-1;i++)
            {
                if(s[i]==s[i+1])
                    d=1;
                else
                {
                    cout<<l-1<<endl;
                    return 0;
                }
            }
            cout<<0<<endl;
            return 0;
    }
    else
    {
        a=l/2;
        b=l/2;
        c=0;
        for(ll i=1; ;i++)
        {
            if(s[a--]==s[b++])
                c=1;
            else
                {
                    cout<<l<<endl;
                    return 0;
                }
            if(b==l)
                break;
        }
            d=0;
            for(ll i=0;i<l-1;i++)
            {
                if(s[i]==s[i+1])
                    d=1;
                else
                {
                    cout<<l-1<<endl;
                    return 0;
                }
            }
            cout<<0<<endl;
            return 0;
    }
}
