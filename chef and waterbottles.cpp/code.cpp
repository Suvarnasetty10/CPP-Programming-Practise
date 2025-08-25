#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,k,u,c;
	    cin>>n>>x>>k;
	    u=n*x;
	    if(u<=k)
	    {
	        cout<<n<<endl;
	    }
	    else
	    {
	        c=k/x;
	        cout<<c<<endl;
	    }
	}
}
