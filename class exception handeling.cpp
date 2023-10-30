#include <iostream>
#include <string>
using namespace std;
class book
{
	private:
		string name;
		int pages;
		int x;
		string anam;
		public:
			void get()
			{
				cout<<"Enter book name = ";
				getline(cin,name);
				cout<<"Author name = ";
				getline(cin,anam);	
				cout<<"no. of pages = ";
				cin>>pages;
				try
				{
					if(pages<=0)
					throw x;
					else
					display();
				}
				catch(int)
				{
					cout<<"no. of pages can not be zero ";
				}
			}
			void display()
			{
				cout<<"Author name :"<<anam<<endl;
				cout<<"Book name :"<<name<<endl;
				cout<<"Number of pages ="<<pages<<endl;				
			}
};
int main(){
	book b;
	b.get();
	//b.display();
	
		return 0;	
}







