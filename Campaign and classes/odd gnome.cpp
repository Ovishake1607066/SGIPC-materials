#include<iostream>
using namespace std;
int main()
{
    int n,g,k,a,c,b;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>g;
        c=0;
        for(int i=1;i<=g;i++)
        {
            cin>>a;
            if(a!=b+1 && i>1 && c==0)
            {
                cout<<i<<endl;
                c=1;
            }
            b=a;
        }
    }
}
