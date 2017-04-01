// Write a class to represent entities of type Fraction with appropriate data members. 
// Include a method simplify that simpfies a given fraction ( for eg: 6/8 to 3/4). Overload the following operators
// >> to read a fraction object
// << to display a fraction object
// == to check if two fractions are the same + to add two fractions
// Illustrate these operations in main function.


#include <iostream>
#include <cstdlib>

using namespace std;

class Fraction{
	int num;
	int den;
public:
	Fraction(){num=0;den=0;}

	friend istream& operator>>(istream&,Fraction&);
	friend ostream& operator<<(ostream&,Fraction&);
	bool operator==(Fraction);
	Fraction operator+(Fraction);

	void simplify();
};

void Fraction::simplify(){
	int a=num;
	int b=den;
	int rem;
	if (num>den){
		b=num;
		a=den;
	}

	while(b!=0){
		rem=a%b;
		a=b;
		b=rem;
	}

	num=num/a;
	den=den/a;
}

istream& operator>>(istream& din,Fraction& f){
	din>>f.num>>f.den;
	return din;
}

ostream& operator<<(ostream& dout,Fraction& f){
	dout<<f.num<<"/"<<f.den<<endl;
	return dout;
}

bool Fraction::operator==(Fraction f1)
{
	if (num==f1.num && den==f1.den)
		return true;
	return false;
}

Fraction Fraction::operator+(Fraction f){
	Fraction f2;
	f2.den=den*f.den;
	f2.num=num*(f2.den/den)+f.num*(f2.den/f.den);
	f2.simplify();

	return f2;
}

int main(){

	Fraction F1,F2;

	cout<<"Enter the first fraction:\n";
	cin>>F1;

	cout<<"Enter the second fraction:\n";
	cin>>F2;

	cout<<"The entered fractions are:\n";
	cout<<"Fraction 1:\n";
	cout<<F1;
	cout<<"Fraction 2:\n";
	cout<<F2;

	cout<<"The fractions in simplified form are:\n";
	F1.simplify();
	F2.simplify();

	cout<<"Fraction 1:\n";
	cout<<F1;
	cout<<"Fraction 2:\n";
	cout<<F2;

	if(F1==F2){
		cout<<"The given fractions are equal\n";
	}
	else
		cout<<"The given fractions are not equal\n";

	cout<<"The sum of the fractions is:\n";
	Fraction F3=F1+F2;
	cout<<F3;

	return 0;



}

