#include <iostream>
using namespace std;
int main()
{
	int a[]={0,2,3,8,5};
	try
	{
		int i=0;
		while(1)
		{
			cout<<a[i]<<endl;
			i++;
			if(i==4)
			throw i;
		
		}
	}
	catch (... j)//generic 
	{
		cout<<"array out of bounds"<<j;
	}
	return 0;
}
