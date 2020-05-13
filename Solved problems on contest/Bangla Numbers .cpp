#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
ll a[2],s[2],h[2],l[2],k[2];
using namespace std;
int main()
{
    ll n,t=1;ofstream cou("out.txt");
    while(cin>>n)
    {
        ll nn=n;
        a[0]=n%100;
        n=n/100;
        ll x=1;
        for(ll i=0; i<2; i++)
        {
            if(n)
            {
                s[x]=n%10;
                n=n/10;
            }
            else
                s[x]=0;
            if(n)
            {
                h[x]=n%100;
                n=n/100;
            }
            else
                h[x]=0;
            if(n)
            {
                l[x]=n%100;
                n=n/100;
            }
            else
                l[x]=0;
            if(n)
            {
                k[x]=n%100;
                n/=100;
            }
            else
                k[x]=0;

            x--;
        }
        ll y=0,p=1,q=0;

        cout<<setw(4)<<t<<".";
        for(ll i=0; i<2; i++)
        {
            //cout<<a[0]<<s[i]<<h[i]<<l[i]<<k[i]<<endl;
            if(k[i]==0 && y==0)
                y=0;
            else
            {
                if(k[i]==0)
                {
                    if(i==1 && p==1 && q==0)
                    {
                        cout<<" kuti";
                        p=0;

                    }
                }
                else
                {
                    cout<<" "<<k[i]<<" "<<"kuti";
                    q=1;
                }
                y=1;

            }
            if(l[i]==0 && y==0)
                y=0;
            else
            {
                if(l[i]==0)
                {
                    if(i==1 && p==1 && q==0)
                    {
                        cout<<" lakh";
                        p=0;
                    }
                }
                else
                {
                    cout<<" "<<l[i]<<" "<<"lakh";
                    q=1;
                }
                y=1;
            }
            if(h[i]==0 && y==0)
                y=0;
            else
            {
                if(h[i]==0)
                {
                    if(i==1 && p==1 && q==0)
                    {
                        cout<<" hajar";
                        p=0;
                    }
                }
                else
                {
                    cout<<" "<<h[i]<<" "<<"hajar";
                    q=1;
                }
                y=1;
            }
            if(s[i]==0 && y==0)
                y=0;
            else
            {
                if(s[i]==0)
                {

                    if(i==1 && p==1 && q==0)
                    {
                        cout<<" shata";
                        p=0;
                    }
                }
                else
                {
                    cout<<" "<<s[i]<<" "<<"shata";
                    q=1;
                }
                y=1;
                q=0;

            }
        }
        if(a[0]!=0 || nn==0)
            cout<<" "<<a[0]<<endl;
        else
            cout<<endl;
        t++;/*
        cou<<setw(4)<<t<<".";
        for(ll i=0; i<2; i++)
        {
            //cout<<a[0]<<s[i]<<h[i]<<l[i]<<k[i]<<endl;
            if(k[i]==0 && y==0)
                y=0;
            else
            {
                if(k[i]==0)
                {
                    if(i==1 && p==1 && q==0)
                    {
                        cou<<" kuti";
                        p=0;

                    }
                }
                else
                {
                    cou<<" "<<k[i]<<" "<<"kuti";
                    q=1;
                }
                y=1;

            }
            if(l[i]==0 && y==0)
                y=0;
            else
            {
                if(l[i]==0)
                {
                    if(i==1 && p==1 && q==0)
                    {
                        cou<<" lakh";
                        p=0;
                    }
                }
                else
                {
                    cou<<" "<<l[i]<<" "<<"lakh";
                    q=1;
                }
                y=1;
            }
            if(h[i]==0 && y==0)
                y=0;
            else
            {
                if(h[i]==0)
                {
                    if(i==1 && p==1 && q==0)
                    {
                        cou<<" hajar";
                        p=0;
                    }
                }
                else
                {
                    cou<<" "<<h[i]<<" "<<"hajar";
                    q=1;
                }
                y=1;
            }
            if(s[i]==0 && y==0)
                y=0;
            else
            {
                if(s[i]==0)
                {

                    if(i==1 && p==1 && q==0)
                    {
                        cou<<" shata";
                        p=0;
                    }
                }
                else
                {
                    cou<<" "<<s[i]<<" "<<"shata";
                    q=1;
                }
                y=1;
                q=0;

            }
        }
        if(a[0]!=0 || nn==0)
            cou<<" "<<a[0]<<endl;
        else
            cou<<endl;
        t++;*/
    }

}
