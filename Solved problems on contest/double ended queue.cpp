#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    ll t,n,m,a,b,c;
    deque<ll>d;
    cin>>t;
    string s;
    loop
    {
        cout<<"Case "<<i+1<<":"<<endl;
        //cout<<"blank"<<endl;
        cin>>n>>m;
        while(m--)
        {
            //cout<<m<<endl;
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>a;
                if(d.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                d.push_front(a);
                cout<<"Pushed in left: "<<a<<endl;
                }
            }
            else if(s=="pushRight")
            {
                cin>>a;
                if(d.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                d.push_back(a);
                cout<<"Pushed in right: "<<a<<endl;
                }
            }
            else if(s=="popRight")
            {
                if(d.empty())
                    cout<<"The queue is empty"<<endl;
                else
                    {
                        cout<<"Popped from right: "<<d.back()<<endl;
                        d.pop_back();
                    }
            }
            else if(s=="popLeft")
            {
                if(d.empty())
                    cout<<"The queue is empty"<<endl;
                else
                    {
                        cout<<"Popped from left: "<<d.front()<<endl;
                        d.pop_front();
                    }
            }
        }
    }
}
