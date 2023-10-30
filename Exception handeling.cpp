#include <iostream>
using namespace std;
int main(){
	int motherage=25;
	int sonage=50;
	try
	{
		if(sonage>motherage)
		throw 404;
		else
		cout<<"Both afes are perfect";
	}
	catch(int a)
	{
		cout<<"son age can not be greater than mother age";
	}
	return 0;
}
