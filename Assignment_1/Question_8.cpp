#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter 2 values"<<endl;
	cin>>x>>y;
	cout<<"Before swapping..."<<endl;
	cout<<"x = "<<x<<" y = "<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
    cout<<"After swapping..."<<endl;
	cout<<"x = "<<x<<" y = "<<y<<endl;
	return 0;
}
