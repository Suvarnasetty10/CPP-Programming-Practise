#include<iostream>
using namespace std;
int main()
{
	int arr[5]={10,6,8,3,2};

	arr[0]=90;
		for(int i=4;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
}
//output
2
3
8
6
90
