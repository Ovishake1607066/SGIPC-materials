#include <bits/stdc++.h>
using namespace std;
int q;
int n;
int zeros(int n)
{
	int ret = 0;
	while(n > 0) {
		n /= 5;
		ret += n;
	}
	return ret;
}
int explore(int start, int end)
{
	int mid;
	int count=0;
	int t;
	if(start > end)
		return -1;
	mid = (start + end)/ 2;
	count = zeros(mid);
	if(count == n) {
		while(zeros(mid)== n) {
			mid--;
		}
		return ++mid;
	}
	if(count<n)
		return explore(mid+1,end);
	else{
		return explore(start,mid-1);
	}
}
int main()
{
	int t;
	int ans;
	cin>>t;
	for(int i=0;i<t;i++)
    {
		cin>>n;
		ans=explore(1,INT_MAX);
		if(ans!=-1)
            cout<<"Case "<<i+1<<": "<<ans<<endl;
		else
            cout<<"Case "<<i+1<<": "<<"impossible"<<endl;
	}
}
