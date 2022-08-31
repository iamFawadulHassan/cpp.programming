#include<iostream>
using namespace std;
void Welcome(string Name);
int main()
{
	string YourName;
	cout<<"Enter your name";
	getline(cin,YourName);
	Welcome(YourName);
}
void Welcome(string Name)
{
string Message="Welcome to the program Mr."+Name;
cout<<Message;
}
