#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=1;i<=n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a,b,c;
    cin>>n;
    a=1867,b=0;
    map<ll,string>m;
    m[0]="Sunday";
    m[1]="Monday";
    m[2]="Tuesday";
    m[3]="Wednesday";
    m[4]="Thursday";
    m[5]="Friday";
    m[6]="Saturday";
    loop
    {
        a++;
        //cout<<a<<endl;
        c=0;
        if(a%4==0)
        {
            if(a%400==0)
                c=1;
            else if(a%100==0)
                c=0;
            else
                c=1;
        }
        if(c==1)
            b+=2;
        else
            b++;
    }
    ll d,e;
    d=b%7;
    cout<<m[d]<<endl;
}
