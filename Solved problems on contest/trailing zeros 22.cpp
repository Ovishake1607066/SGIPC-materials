#include<bits/stdc++.h>
using namespace std;
long long cal(long long int x,int y)
{
    long long c=0;
    int z=y;
    while(y<=x)
    {
        c=c+(x/y);
        y=y*z;
    }
    return c;
}
long long cal2(long long x,int y)
{
    long long c=0;
    while(x%y==0)
    {
        c++;
        x=x/y;
    }
    return c;
}
int main()
{
    long long t,n,r,p,q,a,b,c,d,e=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>r>>p>>q;
        a=cal(n,2)-cal(r,2)-cal(n-r,2);
        b=cal(n,5)-cal(r,5)-cal(n-r,5);
        c=cal2(p,2)*q;
        d=cal2(p,5)*q;
        a=a+c;
        b=b+d;
        cout<<"Case "<<e<<": "<<min(a,b)<<endl;
        e++;
    }
}
