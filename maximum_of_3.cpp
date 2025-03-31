#include<iostream>
using namespace std;
main()
{
//initialization of three numbers
float a,b,c;
//print enter First Number
cout<<"Enter first number = ";
// Get Number From User and save in "a"
cin>>a;
//print enter Second Number
cout<<"Enter Second number = ";
// Get Number From User and save in "b"
cin>>b;
//print enter Third Number
cout<<"Enter Third number = ";
// Get Number From User and save in "c"
cin>>c;
//Now check largest number by compairing
float d=(a>b)?(a>c?a:c):(b>c?b:c);
cout<<"Maximum number is = "<<d<<endl;//print largest on user screen
return 0;	
}
	