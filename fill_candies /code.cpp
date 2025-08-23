//code:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here	for(t)
	int t,h;
    cin>>h;
    for(t=h;t>0;t--)
    {
        int n,k,m,y,o;
        cin>>n>>k>>m;
        o=k*m;
        
        y = ceil((double)n /o);
    
        cout<<y<<endl;
    }

}
