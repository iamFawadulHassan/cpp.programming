#include<iostream>
using namespace std;
void PassRef(int* a, int* b);
int main()
{
	int a=10;
	int b;
	PassRef(&a, &b);
	cout<<b;
	
}
void PassRef(int* a, int* b)
{
	*b=*a;
	
}
