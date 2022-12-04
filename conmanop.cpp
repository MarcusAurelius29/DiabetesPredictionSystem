#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int aa = 30;
	cout<<"The value of a was \n" <<aa<<endl;
	aa=45;
	cout<<"The value of a is \n"<<aa<<endl; 
	
	/*int a = 3;
	cout<<"The value of a was"<<a<<endl;
	a = 45;
	cout<<"The value of a now is "<<a<<endl;
	*/
	
	int a = 3,b=40,c=5022;
	cout<<"The value of a with setw is"<<setw(4)<<a<<endl;
	cout<<"The value of b with setw is"<<setw(4)<<b<<endl;
	cout<<"The value of c with setw is"<<setw(4)<<c<<endl;

	cout<<"The value of a is"<<a<<endl;
	cout<<"The value of b is"<<b<<endl;
	cout<<"The value of c is"<<c<<endl;
	
	return 0;
};
