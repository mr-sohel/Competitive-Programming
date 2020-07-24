#include <iostream>

using namespace std;

int main()
{
	
	int a,b;
	int ch;
	cin>>ch;
	if(ch == 1)
	{
		cin>>a>>b;
		cout<<a+b<<endl;
	}
	else if(ch == 2)
	{
		cin>>a>>b;
		cout<<a-b<<endl;
	}
	else if(ch == 3)
	{
		cin>>a>>b;
		cout<<a*b<<endl;
	}
	else if(ch == 4)
	{
		cin>>a>>b;
		if(b != 0)
			cout<<a/b<<endl;
		else 
			cout<<"You can not divide by zero"<<endl;
	}
	return 0;
}
