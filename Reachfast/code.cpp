#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	     double n=ceil(abs((double) (b-a)/c));
	    cout<<n<<endl;
	}
}
