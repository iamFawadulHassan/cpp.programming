#include<iostream>
using namespace std;
int main()
{
	int a=1;
	cout<<"Value\tSquare\tCube"<<endl;
	do
	{
		cout<<a<<"\t"<<a*a<<"\t"<<a*a*a<<endl;
		a++;
	}
	while(a<=10);
	
	
}
