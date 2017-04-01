#include<iostream>

using namespace std;

class queue
{
	int f,r;
	int *q;
	int size;
	public:
	queue(int s){
	size=s;
	q=new int[size];
	f=-1;
	r=-1;
	}
	
	void operator+(int);
	void operator-();
	void disp()
	{
	for(int i=f;i<=r;i++)
	{
		cout<<q[i]<<" ";
	}
	}
};

void queue::operator+(int ele)
{
	if(r==size-1){
	cout<<"Queue overflow";
	return;
	}
	
	q[++r]=ele;
	if(f==-1){
	f=0;
	}
}

void queue::operator-()
{
	if(f==-1){
	cout<<"Queue empty\n";
	return;
	}
	
	f++;
	
}

int main()
{
	cout<<"Enter the size of queue\n";
	int s;
	cin>>s;
	queue q1(s);
	
	while(1){
		cout<<"\n1.Insert  2.Delete  3.Display  4.Exit\n";
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:  cout<<"Enter the element\n";
					int data;
					cin>>data;
					q1+data;
					break;
					
			case 2: -q1;
					break;
					
			case 3: q1.disp();
					break;
					
			case 4: return 0;
			
			default: cout<<"Invalid input\n";
		}
	}
	return 0;
}
