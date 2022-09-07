#include<iostream>
using namespace std;
int main()
{
	string FirstName = "Muhammad ";
	string MiddleName = "Fawad";
	string LastName = "-ul-Hassan";
	
	string PartOne = FirstName+MiddleName; //using String Concatinaton.
	string FullName = PartOne.append(LastName); //Using in builtin append function
	cout<<FullName;
	
	
}
