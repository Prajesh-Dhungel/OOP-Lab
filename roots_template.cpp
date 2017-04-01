#include <iostream>
#include <cmath>
using namespace std;

template<class T1,class T2,class T3>

class Roots{
	T1 a;
	T2 b;
	T3 c;
public:
	Roots():a(0),b(0),c(0){}
	Roots(T1 x,T2 y,T3 z):a(x),b(y),c(z){};
	void display();
	void roots_();

};
template<class T1,class T2,class T3>
void Roots<T1,T2,T3>::display()
{
	cout<<"For the given quadratic eq.:\n";
	cout<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
}
template<class T1,class T2,class T3>
void Roots<T1,T2,T3>::roots_()
{
	float d=(b*b-4*a*c);
	float x1=(-b+sqrt(abs(d)))/(2*a);
	float x2=(-b-sqrt(abs(d)))/(2*a);

	if (d==0)
	{
		cout<<"The roots are equal\n";
		cout<<"Root 1: "<<x1<<endl<<"Root 2: "<<x2<<endl; 
	}
	else if(d>0)
	{
		cout<<"Roots are real and distinct\n";
		cout<<"Root 1: "<<x1<<endl<<"Root 2: "<<x2<<endl; 
	}
	else
	{
		cout<<"Roots are imaginary\n";
		cout<<"Root 1: "<<-b/(2*a)<<"+ i"<<d/(2*a)<<endl;
		cout<<"Root 2: "<<-b/(2*a)<<"- i"<<d/(2*a)<<endl;
	}
}

int main()
{
	Roots<int,int,int>r1(1,2,1);
	Roots<int,float,int>r2(1,2.1,1);

	r1.display();
	r1.roots_();

	
	r2.display();
	r2.roots_();

	return 0;



}