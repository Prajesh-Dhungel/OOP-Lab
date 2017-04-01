#include <iostream>
#include <cstdlib>
using namespace std;

const int size = 3;

class vector{
	int a[size];
	public:
		vector()
		{
			for (int i=0;i<size;i++)
			{
				a[i]=0;
			}
		}

			vector(int* x)
			{
				for(int i=0;i<size;i++)
					a[i]=x[i];
			}

			friend vector operator*(int ,vector);
			friend vector operator*(vector,int);

			friend istream & operator>>(istream &,vector &);
			friend ostream & operator<<(ostream &,vector &);

		

};

vector operator*(int b,vector v)
{
		vector c;
		for(int i=0;i<size;i++)
			c.a[i]=b*v.a[i];
		return c;
}

vector operator*(vector v,int b)
{
		vector c;
		for(int i=0;i<size;i++)
			c.a[i]=b*v.a[i];
		return c;
}

istream & operator>>(istream &din,vector &b)
{
	
	for(int i=0;i<size;i++)
		din>>b.a[i];
	return (din);
}

ostream & operator<<(ostream &dout,vector &b)
{	
	
	for(int i=0;i<size;i++)
		dout<<b.a[i]<<",";
	dout<<endl;
	return (dout);
}

int main()
{
	vector v1;
	int x[size]={2,4,6};
	vector v2=x;
	cout<<"Enter elements of vector v1 "<<"\n";
	cin>>v1;
	cout<<"\n";

	cout<<"v1 = "<<v1<<endl;

	vector v3,v4;

	v3=2*v1;
	v4=v2*2;

	cout<<"\n";
	cout<<" v3 = "<<v3<<"\n";
	cout<<" v4 = "<<v4<<"\n";

	return 0; 


}


