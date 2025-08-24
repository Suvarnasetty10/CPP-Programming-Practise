#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,y1,y2,z;
	cin>>x1>>y1>>x2>>y2;
	z=max(abs(x1-x2),abs(y1-y2));
	cout<<z<<endl;
     }
}
