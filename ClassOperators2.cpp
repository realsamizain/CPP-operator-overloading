/*
Class, objects, operators overloading, function defination in class, function defination outside of class...
Solve by Sami Zain (SZ)
join our facebook page for more information...
www.facebook.com/javaworkhouse
*/
#include<iostream>
using namespace std;
void doagain();
class calculator {
private:
	int x, y, z; // private members of the Class.

public:
 	 calculator() // A constructure and defination of constructure.
 	{
 	getvalues();// calling the functions for input the values.
	 }
	 ~calculator(){}; // A destructurs.
	 void getvalues()
	 {
	 	int n1,n2;
	 	system("cls");
	 	cout<<"A simple calculator\n "<<endl;
cout<<"Enter the first value: ";
cin >> n1;
cout<<endl;
cout<<"Enter the second value: ";
cin>>n2;
cout<<endl;
getdata(n1,n2);
	 }
inline void getdata(int a, int b)
	{
		x=a; // Assign the value to the private members.
		y=b;
	}
	void display(int result)
	{
		cout<<"\nResult is: "<<result;
		doagain();
			}
    void operator+(calculator &)
    {
    	z=x+y;

	display(z);	
	}
	void operator-(calculator &);
	void operator/(calculator &);
	void operator*(calculator &);
	void operator%(calculator &);

};
void calculator::operator-(calculator &object)
{
z= x-y;
display(z);	
}
void calculator::operator/(calculator &object) 
{
z = x/y;
	display(z);
}
void calculator::operator*(calculator &object) 
{	z = x*y;
	display(z);
	}
void calculator::operator%(calculator &object) {
z = x%y;
display(z);	
	}
	void repeater(calculator ob1){
	
char ope;

cout<<endl;
cout<<"1. for sum:\n2. for minues:\n3. for multiply:\n4. for Divide:\n5. For Mod: \nEnter your choice:: ";
cin>> ope;
switch (ope)
{
	case '1':
	{
		ob1+ob1;
		break;
	}
	case '2':
		{
			ob1-ob1;
			break;
		}
	case '3':
		{
			ob1*ob1;
			break;
		}
		case '4':
			{
				ob1/ob1;
				break;
			}
			case '5':
				{
					ob1%ob1;
				//repeater();
					break;
				}
				default:
					{
						cout<<"Enter a valid option: "<<endl;
						repeater(ob1);
						break;
}
}
}
main()
{
calculator ob1;	
repeater(ob1);
}
void doagain(){
cout<<endl;
cout<<"Do you want to test again?(Y/N) ";
char er;
cin>>er;
switch(er)
{
case 'Y':
case 'y':
	{
	main();
	}
case 'N':
case 'n':
{
exit(0);
}
default:
exit(0);
}
}

