#include<bits/stdc++.h>
#define ll long long
using namespace std;
class c
{
    public:
    int c1,c2;
}cc[1000000];
    bool ValueCmp(c const & a, c const & b)
    {
    return a.c1 < b.c1;
    }
int main()
{
    ll n,m,i,a,b,d,e,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>cc[i].c1>>cc[i].c2;
        s=s+cc[i].c2;
    }
    cin>>m;
    for(ll j=0;j<m;j++)
    {
        cin>>cc[i].c1>>cc[i].c2;
        s=s+cc[i].c2;
        i++;
    }
    sort(cc, cc + i, ValueCmp);
    for(ll j=0;j<i;j++)
    {
        cout<<cc[j].c1<<"    "<<cc[j].c2<<endl;
    }
    e=i;
    for(ll j=0;j<i-1;j++)
    {
        if(cc[j].c1==cc[j+1].c1)
        {
            if(cc[j].c2>cc[j+1].c2)
                s-=cc[j+1].c2;
            else
                s-=cc[j].c2;
        }
    }
    cout<<s<<endl;
}
