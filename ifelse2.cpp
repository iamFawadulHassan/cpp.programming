#include<iostream>
using namespace std;
int main()
{
	int valueOne;
	cout<<"Enter the first value";
	cin>>valueOne;
	int valueTwo;
	cout<<"Enter the second value";
	cin>>valueTwo;
	
	if(valueOne+valueTwo!=0)
	{
		cout<<"Your answer is correct"<<endl;
	}
	else
	{
		cout<<"Wrong answer"<<endl;
	}
}
