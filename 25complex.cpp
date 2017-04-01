//5. Write a C++ program to create class called COMPLEX with private properties real and image and
//implement the following concepts.
// Operator overloading with friend functions
//a. + Operator for addition
//b. - Operator for subtraction


#include<iostream>

using namespace std;

class complex{

	int real,image;
	public:
	complex(){real=0;image=0;}
	complex(int a,int b){
	real=a;
	image=b;
	}
	friend complex operator+(complex,complex);
	friend complex operator-(complex,complex);
	void disp(){
	cout<<"Complex No. = "<<real<<"+ i("<<image<<")"<<endl;
	}
};

complex operator+(complex c1,complex c2)
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.image=c1.image+c2.image;
	return c3;
}

complex operator-(complex C1,complex C2)
{
	complex C3;
	C3.real=C1.real-C2.real;
	C3.image=C1.image-C2.image;
	return C3;
}

int main()
{
	cout<<"Enter the first complex no.\n";
	int r,i;
	cout<<"Real part=\n";
	cin>>r;
	cout<<"Imaginary part=\n";
	cin>>i;
	complex cc1(r,i);
	cout<<"Enter the second complex number\n";
	int rr,ii;
	cout<<"Real part=\n";
	cin>>rr;
	cout<<"Imaginary part=\n";
	cin>>ii;
	complex cc2(rr,ii);
	cout<<"The entered complex nos. are:\n";
	cc1.disp();
	cc2.disp();
	
	cout<<"The sum of two complex nos. is:\n";
	complex cc3;
	cc3=cc1+cc2;
	cc3.disp();
	
	cout<<"The difference of two complex nos. is:\n";
	complex cc4;
	cc4=cc1-cc2;
	cc4.disp();
	return 0;
}
