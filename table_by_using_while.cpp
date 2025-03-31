#include<iostream>
using namespace std;
main()
{
	int a=1;
	int b;
	cout<<"enter a number for table"<<endl;
	cin>>b;
	while(a<=10)
	{
		cout<<b<<" * "<<a<<" = "<<a*b<<endl;
		a++;
	}
return 0;
}
