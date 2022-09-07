#include<iostream>
using namespace std;
int main()
{
	string FirstName,LastName,FullName;
	cout<<"Enter your first name"<<endl;
	cin>>FirstName;
	cout<<"Length of first name is:";
	cout<<FirstName.length()<<endl;
	
	cout<<"Enter your last name"<<endl;
	cin>>LastName;
	cout<<"Length of last name is:";
	cout<<LastName.length()<<endl;
	
	FullName=FirstName+LastName;
	cout<<"Your full name is:";
	cout<<FullName<<endl;
	cout<<"Length of full name is:";
	cout<<FullName.length()<<endl;
}
