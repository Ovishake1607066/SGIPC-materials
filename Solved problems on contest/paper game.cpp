#include<bits/stdc++.H>
using namespace std;
int main()
{
    long long int t,w,h,a,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>w>>h;
        a=w*h+1;
        if(a%2==0)
            cout<<"Hussain"<<endl;
        else
            cout<<"Hasan"<<endl;
    }
}
