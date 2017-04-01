// // Define a user defined STRING class with appropriate data members and Demonstrate the followings concepts by 
// // implementing suitable behaviors:
// // Default and parameterized constructors Dynamic memory allocation
// // Operator overloading:
// // a. Overload + to concatenate two strings using friend function
// // b. Overload > to compare two strings (based on length) using friend function
// // c. Overload >> to read a string from console.
// // d. Overload << to write a string to console.

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class STRING{
	char *name;
	int size;

public:
	STRING(){
		size=0;
		name=new char[1];
	}
	STRING(char*s){
		size=strlen(s);
		name=new char[size+1];
		strcpy(name,s);
	}
	friend STRING operator+(STRING&,STRING&);
	friend int operator>(STRING,STRING);
	friend istream& operator>>(istream&,STRING&);
	friend ostream& operator<<(ostream&,STRING&);
	// void display(){
	// 	cout<<name<<endl;
	// }

};

STRING operator+(STRING &s1,STRING &s2)
{
	STRING s3;
	s3.size=s1.size+s2.size;
	s3.name=new char[s3.size+1];
	strcpy(s3.name,s1.name);
	strcat(s3.name,s2.name);
	return s3;
}

int operator>(STRING a,STRING b)
{
	if(strlen(a.name)>strlen(b.name))
		return 1;
	else
		return 0;
}

istream &operator>>(istream& din,STRING& p)
{
	din>>p.name;
	return din;
}

ostream &operator<<(ostream &dout,STRING& q)
{
	dout<<q.name<<endl;
	return dout;
}

int main(){
	STRING s1("Piyush "),s2("Srivastava");
	STRING s3;
	s3=s1+s2;
	cout<<"The concatenation of two strings is:\n";
	cout<<s3;

	// s3.display();
	if(s2>s1){
		cout<<"String 1 is greater than String 2\n";

	}
	else
		cout<<"String 1 is not greater than String 2\n";

	return 0;
}




