// Write a C++ program to create a class called DATE with private data members day, month, and year. 
// Accept 2 valid dates in the form dd/mm/yy. Implement the following operations by overloading the operators + & - . 
// After every operation display the results by overloading the operator <<.
// a. no_of_days = d1 - d2; where d1 & d2 are the DATE objects, d1>=d2 and no_of_days is an integer
// b. d2 = d1 + no_of_days; where d1 & d2 are the DATE objects, d1>=d2 and no_of_days is an integer

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
class DATE{
	int day;
	int month;
	int yr;
public:
	DATE(){day=0;month=0;yr=0;}
	void getDate()
	{
		cout<<"Enter the date in dd/mm/yy format:\n";
		cin>>day>>month>>yr;
	}

	friend int operator-(DATE , DATE);
	friend  DATE operator+(DATE,int);
	friend ostream & operator<<(ostream &,DATE &);

};

int operator-(DATE d1,DATE d2)
{
	int days;
	// days=(d1.yr-d2.yr)*365+(abs(d1.month-d2.month))*30+abs(d1.day-d2.day);
	days=(d1.day+30-d2.day)+(12-d2.month+d1.month-1)*30+(abs(d1.yr-d2.yr-1))*365;
	return days;
}

DATE operator+(DATE d,int n)
{
	DATE DD;
	DD.day=d.day+(n%365)%30;
	DD.month=d.month+floor((n%365)/30)+floor(DD.day/30);
	DD.yr=d.yr+floor(n/365)+floor(DD.month/12);
	

	DD.day=DD.day%31;
	DD.month=DD.month%13;
	DD.yr=DD.yr%100;
	return DD;

}

ostream &operator<<(ostream &dout,DATE &d1)
{
	dout<<d1.day<<"/"<<d1.month<<"/"<<d1.yr<<endl;
	return dout;
}

int main()
{
	DATE D1,D2;
	cout<<"Enter date 1:\n";
	D1.getDate();
	cout<<"The entered date is:\n";
	cout<<D1;
	cout<<"Enter date 2:\n";
	D2.getDate();
	cout<<"The entered date is:\n";
	cout<<D2;

	int no_of_days;
	no_of_days=D1-D2;
	cout<<"No. of days = "<<no_of_days<<endl;
	D2=D1+no_of_days;
	cout<<D2;
	return 0;

}