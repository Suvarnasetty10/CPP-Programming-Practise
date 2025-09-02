#include<iostream>
using namespace std;
int main()
{
	int c;
	int arr[5]={10,6,8,3,2};
	cout<<"size of arr[3]:"<<sizeof(arr[3])<<endl;
	cout<<"size of arr:"<<sizeof(arr)<<endl;
	c=sizeof(arr)/sizeof(arr[0]);
	cout<<"no opf elements in array:"<<c<<endl;

}
//output:
size of arr[3]:4
size of arr:20
no opf elements in array:5

