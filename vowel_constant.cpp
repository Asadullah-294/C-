#include<iostream>
using namespace std; 


main()
{
char ch;
int a;
	cout<<"Enter a single letter"<<endl;
	cin>>ch;
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' )
	{
	
	    switch(ch){
		
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			cout<<"This alphabet "<<ch<<" is a vowel"<<endl;
			break;

	default:
		cout<<"This alphabet "<<ch<<" is a constant";
		break;
		}
	}else{
		cout<<"invalid entery";
	}
	return 0;
}
