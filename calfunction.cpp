#include<iostream>
#include<math.h>
using namespace std;

void Add();
void Sub();
void Mul();
void Div();
void SquareRoot();
void Cos();
void Pow();

int valueOne;
int valueTwo;

int main()
{
	char c='y';
	while(c=='y' || c=='Y')
	{
	system("cls");
	int choice;
	cout<<"Please enter your choice: \n1:Add\n2:Sub\n3:Mul\n4:Div\n5:SquareRoot\n6:Cos\n7:Pow"<<endl;
	cin>>choice;
	
	switch(choice)
		{
			case 1:
			Add();
			break;
			case 2:
			Sub();
			break;
			case 3:
			Mul();
			break;
			case 4:
			Div();
			break;
			case 5:
			SquareRoot();
			break;
			case 6:
			Cos();
			break;
			case 7:
			Pow();
			break;
			default:
			cout<<"Invalid choice";
		}
			cout<<"\nDo you want to continue? (Y/N)"<<endl;
			cin>>c;	
	}		
}
		
	void Add()
	{
		cout<<"Please enter valueOne";
		cin>>valueOne;
		cout<<"Please enter valueTwo";
		cin>>valueTwo;
		cout<<valueOne+valueTwo;
	}
	void Sub()
	{
		cout<<"Please enter valueOne";
		cin>>valueOne;
		cout<<"Please enter valueTwo";
		cin>>valueTwo;
		cout<<valueOne-valueTwo;
	}
	void Mul()
	{
		cout<<"Please enter valueOne";
		cin>>valueOne;
		cout<<"Please enter valueTwo";
		cin>>valueTwo;
		cout<<valueOne*valueTwo;
	}
	void Div()
	{
		cout<<"Please enter valueOne";
		cin>>valueOne;
		cout<<"Please enter valueTwo";
		cin>>valueTwo;
		cout<<valueOne/valueTwo;
	}
	void SquareRoot()
	{
		cout<<"Please enter value";
		cin>>valueOne;
		cout<<sqrt(valueOne);
	}
	void Cos()
	{
		cout<<"Please enter value";
		cin>>valueOne;
		cout<<cos(valueOne);
	}
	void Pow()
	{
		cout<<"Please enter valueOne";
		cin>>valueOne;
		cout<<"Please enter valueTwo";
		cin>>valueTwo;
		cout<<pow(valueOne,valueTwo);
	}
