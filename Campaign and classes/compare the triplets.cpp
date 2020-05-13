#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a0,a1,a2,b0,b1,b2,c1=0,c2=0;
    cin>>a0>>a1>>a2>>b0>>b1>>b2;
    if(a0>b0)
        c1=c1+1;
    if(a0<b0)
        c2=c2+1;
    if(a1>b1)
        c1=c1+1;
    if(a1<b1)
        c2=c2+1;
    if(a2>b2)
        c1=c1+1;
    if(a2<b2)
        c2=c2+1;
    cout<<c1<<" "<<c2;
}
