// Define a DISTANCE class with private data members feet and inches. Demonstrate the followings concepts by 
// implementing suitable behaviors:
// i. Default and parameterized constructor
// ii. Overload + to add two distance objects using friend functions.
// iii. Overload - to subtract one distance object from another using friend functions.
// iv. Overload ~ to display the distance object

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Distance{
	int feet;
	int inch;

public:
	Distance(){feet=0;inch=0;}
	Distance(int x,int y){
		feet=x;
		inch=y;
	}
	void getdata(){
		cout<<"Enter the distance in feet and inches\n";
		cin>>feet>>inch;
	}
	friend Distance operator+(Distance,Distance);
	friend Distance operator-(Distance,Distance);
	void operator~();
};

Distance operator+(Distance d1,Distance d2)
{
	Distance d3;
	d3.inch=d1.inch+d2.inch;
	d3.feet=d1.feet+d2.feet+floor(d3.inch/12);
	d3.inch=d3.inch%12;
	return d3;

}

Distance operator-(Distance D1,Distance D2)
{
	Distance d3;
	d3.inch=abs(D1.inch-D2.inch);
	d3.feet=abs(D1.feet-D2.feet)+floor(d3.inch/12);
	d3.inch=d3.inch%12;
	return d3;

}

void Distance::operator~()
{	
	
	cout<<feet<<" feet and "<<inch<<" inches\n";
}

int main()
{
	Distance dd1,dd3,dd4;
	cout<<"Distance 1:\n";
	dd1.getdata();
	cout<<"Distance 2:\n";
	cout<<"Enter the distance in feet and inches\n";
	int f;
	int i;
	cin>>f>>i;
	Distance dd2(f,i);
	cout<<"Entered distances are:\n";
	~dd1;
	~dd2;

	dd3=dd1+dd2;
	cout<<"Sum of distances:\n";
	~dd3;
	dd4=dd1-dd2;
	cout<<"Difference of distances:\n";
	~dd4;
	return 0;

}




