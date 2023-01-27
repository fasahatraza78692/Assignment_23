#include<iostream>
using namespace std;
int main()
{
	int ar[10],s=0;
	cout<<"Enter 10 elements"<<endl;
	for(int i=0;i<10;i++)
      cin>>ar[i];
    for(int i=0;i<10;i++)
      s=s+ar[i];
    cout<<"Sum = "<<s;
	return 0;
}
