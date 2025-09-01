#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,g;
	    cin>>a>>b;
	    if(b==0)
	    {
	        cout<<0<<endl;
	    }
	    else if(a==b)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        g=a-b;
	        if(g>=b)
	        {
	            cout<<b<<endl;
	        }
	        else
	        {
	            cout<<g<<endl;
	        }
	    }
	}
}
