#include <iostream>

using namespace std;

template<class T>
class Queue{
	int f,r;
	T* q;
	int size;
public:
	Queue():f(-1),r(-1),q(new T[1]){}
	Queue(int s):f(-1),r(-1),q(new T[s+1]),size(s){}	
	void insert_(T ele){
		if(r==size-1)
			cout<<"Queue overflow\n";
		else
			q[++r]=ele;
		if(f==-1)
			f=0;
	}

	T delete_(){
		if(f==-1){
			cout<<"Queue empty\n";
			return 0;
		}
		else
			return(q[f++]);
	}

	void display()
	{
		if(f==-1||f>r)
			{
				cout<<"Queue Empty\n";
			}
		else
		{
			cout<<"Front->";
			for(int i=f;i<=r;i++)
			{
				cout<<q[i]<<" ";
			}
			cout<<"<-Rear";
		}
	}
	void Menu_(){
		T data;
		T e;
		while(1){
		cout<<"\n1.Insert  2.Delete  3.Display  4.Exit\n";
		int ch2;
		cin>>ch2;
		switch(ch2)
		{
			case 1:  cout<<"Enter the element\n";
					cin>>data;
					insert_(data);
					break;
					
			case 2: e=delete_();
					cout<<e<<" is deleted from the queue\n";
					break;
					
			case 3: display();
					break;
					
			case 4: return ;
			
			default: cout<<"Invalid input\n";
		}
	}
	}
	~Queue(){
		delete q;
	}
};

int main()
{
	int ch;
	cout<<"Enter 1 for integer queue and 2 for float queue\n";
	cin>>ch;
	cout<<"Enter the size of queue\n";
	int s;

	cin>>s;
	if(ch==1)
	{
		Queue<int>q1(s);
		q1.Menu_();
	}
	else
	{
		Queue<float>q2(s);
		q2.Menu_();
		
	}

	return 0;
}