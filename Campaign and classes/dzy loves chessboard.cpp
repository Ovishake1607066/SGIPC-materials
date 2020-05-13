#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,k,a,b,c;
    char ch,ch1;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ch;
            if(ch=='-')
                cout<<"-";
            else if(ch=='.' && (i+j)%2==0)
                cout<<"B";
            else
                cout<<"W";
        }
        cout<<endl;
    }
}
