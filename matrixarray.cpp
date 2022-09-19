#include<iostream>
using namespace std;
int main()
{
	int ROW=2;
	int COLUMN=2;
	int a[ROW][COLUMN];
	int b[ROW][COLUMN];
	int c[ROW][COLUMN];

	cout<<"Enter matrix one:";
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COLUMN;j++)
		{
			cin>>a[i][j];
		}
	
	}
	cout<<"Enter matrix two:";
	for(int i=0;i<ROW;i++)
		{
		for(int j=0;j<COLUMN;j++)
			{
			cin>>b[i][j];
			}
		}
		for(int i=0;i<ROW;i++)
		{
		for(int j=0;j<COLUMN;j++)
			{
			
			c[i][j] = a[i][j] + b[i][j];
			
			}
		}
		cout<<"The resultant matrix is:"<<endl;
		for(int i=0;i<ROW;i++)
		{
		for(int j=0;j<COLUMN;j++)
			{
			
			cout<<c[i][j]<<"\t";
			
			}
			cout<<endl;	
		}
}
