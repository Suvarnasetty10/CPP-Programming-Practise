#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,c;
	    cin>>x;
	    
	    if(x%5==0)
	    {
	        c=ceil(double(x)/10);
	        cout<<c<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
}
