//Write a C++ program to create a class called STACK. Implement the stack operations by
//overloading unary minus (POP) and binary plus (PUSH).Use member functions. The program
//must work for both integers and float type of data.


#include<iostream>

using namespace std;

class stack{

	int top;
	int size;
	int *stk;
	public:
	stack(int s){size=s;
	stk=new int[size];
	top=-1;
	}
	void operator+(int );
	void operator-();
	void disp(){
	for(int i=0;i<=top;i++)
	{
		cout<<stk[i]<<" ";
	}
	
	}
};

void stack::operator+(int ele)
{
	if (top==size-1){
	cout<<"Stack overflow\n";
	return;
	}
	stk[++top]=ele;
	
}
void stack::operator-()
{
	if (top==0){
	cout<<"Stack empty\n";
	return;
	}
	stk[top--];
}

int main()
{
	cout<<"\nEnter the size of array\n";
	int s;
	cin>>s;
	stack s1(s);
	while(1){
		cout<<"\n1.Push 2.Pop 3.Display 4.Exit\n";
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter the element\n";
					int data;
					cin>>data;
					s1+data;
					break;
				
			case 2:  -s1;
					break;
				
			case 3: s1.disp();
					break;
				
			case 4: return 0;
					break;
			default: cout<<"Invalid input\n";
		}
		}
	
	return 0;
}
