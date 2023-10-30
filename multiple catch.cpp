#include <iostream>
using namespace std;
void test(int x)
{
	char msg[]="exception *";
	try
	{
		if (x==1)
		throw x;
		else if (x==0)
		throw 'x';
		else if (x==2)
		throw 1.1f;
		else if (x==3)
		throw msg;
		else
		cout<<"END OF TRY";
	}
	catch(float n){
		cout<<"caught float \n";
	}
	catch(int m){
		cout<<"caught int \n";
	}
	catch(char o){
		cout<<"caught character \n";
	}
//	catch(char msg[]){
//		cout<<"caught msg \n";
//	}
	catch(...)
	{
		cout<<"end of try catch \n";
	}
}
int main()
{
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	return 0;
}
