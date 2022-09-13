#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int* c;
	
	a=10;
	b=a;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<b<<endl;
	cout<<&b<<endl;
	
	c=&a;
	cout<<c;
	
	
}
