#include<bits/stdc++.h>
#define ll long long int
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll k,a,b,e,c,d;
    cin>>k>>a>>b;
    d=(abs(b))/k;
    c=(abs(a))/k;
    //cout<<c<<d<<endl;
    if(a<0 && b>=0)
    {
            cout<<c+d+1<<endl;
    }
    else if(a<0 && b<0)
    {
        if(b%k==0)
            cout<<c-d+1<<endl;
        else
            cout<<c-d<<endl;
    }
    else
    {
        if(a%k==0)
            cout<<d-c+1<<endl;
        else
            cout<<d-c<<endl;
    }
}
