#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int a,b,c;
	    double j;
	    cin>>a>>b>>c;
	    j=ceil(((double) (a-c)/b));
	    cout<<j+1<<endl;   
	}
}
