#include<iostream>
using namespace std;
int main()
{
	int ROW=4;
	int COLUMN=3;
	int matrix[ROW][COLUMN];
	
	for(int k=0;k<2;k++)
	{
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COLUMN;j++)
		{
			cin>>matrix[i][j];
			
		}
	
	}
	for(int i=0;i<ROW;i++)
		{
		for(int j=0;j<COLUMN;j++)
			{
			cout<<matrix[i][j]<<"\t";
			
			}
		cout<<endl;
		}
	
	}
}
