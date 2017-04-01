//Write a C++ program to create class called MATRIX. Overload the operator ‘==’ which checks the
//compatibility of two matrices m1 and m2 to be multiplied and also check for the equality of two
//matrices element wise. Perform the multiplication of matrices by overloading the operator *.


#include<iostream>

using namespace std;

class matrix{
	int m,n;
	int **p;
	public:
	matrix(){m=0;n=0;}
	matrix(int a,int b){
	m=a;
	n=b;
	p=new int*[a];
	for(int i=0;i<a;i++)
	{
		p[i]=new int[b];
	}
	}
	void getMatrix();
	friend int operator==(matrix,matrix);
	friend matrix operator*(matrix,matrix);
	void disp(){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
	}
	
	
};
void matrix::getMatrix()
{
	cout<<"Enter the matrix elements\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>p[i][j];
		}
	}
}

int operator==(matrix m1,matrix m2)
{
	if (m1.n==m2.m)
	return (1);
	else
	return (0);
}

matrix operator*(matrix M1,matrix M2)
{
	matrix M3(M1.m,M2.n);
	for(int i=0;i<M1.m;i++)
	{
		for (int j=0;j<M2.n;j++)
		{
			for(int k=0;k<M1.n;k++)
			{
			M3.p[i][j]=M3.p[i][j]+M1.p[i][k]*M2.p[k][j];
			}
		}
	}
	return M3;
}

int main()
{
	cout<<"Enter the details of first matrix:\n";
	int r,c;
	cout<<"Rows:\n";
	cin>>r;
	cout<<"Columns:\n";
	cin>>c;
	matrix MM1(r,c);
	
	
	cout<<"Enter the details of second matrix:\n";
	int rr,cc;
	cout<<"Rows:\n";
	cin>>rr;
	cout<<"Columns:\n";
	cin>>cc;
	matrix MM2(rr,cc);
	int a=(MM1==MM2);
	if (a==1)
	{
		cout<<"Matrices are multiplicable\n";
	}
	else
	{
		cout<<"Matrices are not multiplicable\n";
		return 0;
	}
	MM1.getMatrix();
	MM2.getMatrix();
	cout<<"Matrix 1:\n";
	MM1.disp();
	cout<<"\nMatrix 2:\n";
	MM2.disp();
	
	matrix MM3;
	MM3=MM1*MM2;
	cout<<"Matrix 3:\n";
	MM3.disp();
	return 0;
}
