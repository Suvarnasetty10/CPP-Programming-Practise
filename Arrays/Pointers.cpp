#include<iostream>
using namespace std;
int main()
{
	int arr[5]={10,6,8,3,2};
	for(int i=0;i<=4;i++)
	{
		cout<<&arr[i]<<endl;
	}
}
//output:
0x70fe30
0x70fe34
0x70fe38
0x70fe3c
0x70fe40
