#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,x,b,y;
	    
	    cin>>a>>x>>b>>y;
	   double e= (double)a/x;
	   double f=(double)b/y;
	    if(e<f)
	    {
	        cout<<"BOb"<<endl;
	    }
	    else if(e==f)
	    {
	        cout<<"Equal"<<endl;
	    }
	    else
	    {
	        cout<<"Alice"<<endl;
	    }
	}

}
