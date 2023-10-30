#include <iostream>
using namespace std;
void divide(int x, int y)
{
	cout<<"Inside function \n";
	int z;
	z=x/y;
	if (z!=0)
	cout<<z<<endl;
	else
	throw 0;
}
int main()
{
	try 
	{
		divide (40,20);
		cout<<"one try over \n";
		divide(2,10);
	}
	catch(int)
	{
		cout<<"Zero not possible"<<endl;
	}
	cout<<"try catch over \n";
	return 0;
}
