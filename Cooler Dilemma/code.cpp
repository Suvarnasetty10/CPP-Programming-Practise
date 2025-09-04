#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b;
	    if(b>a)
	    {
	        c=(b-1)/a;
	        cout<<c<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
}
