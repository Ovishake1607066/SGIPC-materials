#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b,c=0,d=0;;
    while(cin>>n && n)
    {
        c=0;
        d++;
        if(n%2==0)
            a=n/2;
        else
            a=n/2+1;
        if(a%2==0)
            b=a/2-1;
        else
            {
                b=a/2;
            }
        c=(b*b+b)/2;
        c*=2;
        if(a%2!=0)
            c-=b;
        cout<<"Case "<<d<<": "<<c<<endl;
    }
}
