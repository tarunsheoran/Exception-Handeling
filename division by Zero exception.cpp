#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter values of a and b ";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		throw b;
		else
		c=a/b;
		cout<<"The value of c is : "<<c<<endl;
	}
	catch(int)
	{
		cout<<"Division by zero not possible ";
	}
	return 0;
}
