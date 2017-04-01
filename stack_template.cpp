#include <iostream>
using namespace std;

template<class T>
class Stack_{
	T* stk;
	int top;
	int size;
public:
	Stack_():top(-1),stk(new T[1]){}
	Stack_(int s):top(-1),size(s),stk(new T[s+1]){}
	~Stack_(){
		delete stk;
	}
	void push(T data)
	{
		if(top==size-1)
			cout<<"Stack Overflow\n";
		else
			stk[++top]=data;
	}

	T pop(){
		if(top==-1){
			cout<<"Stack Empty\n";
			return 0;
		}
		else
			return(stk[top--]);
	}
	void display(){
		if(top==-1){
			cout<<"Stack Empty\n";
		}
		else
		{
			for(int i=0;i<=top;i++)
				cout<<stk[i]<<" ";
		}
		cout<<endl;
	}
	void menu_(){
		T data;
		T ele;
		while(1){
		cout<<"\n1.Push 2.Pop 3.Display 4.Exit\n";
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter the element\n";
					
					cin>>data;
					push(data);
					break;
				
			case 2:  ele=pop();
					 cout<<ele<<" is popped from stack\n";
					break;
				
			case 3: display();
					break;
				
			case 4: return ;
					break;
			default: cout<<"Invalid input\n";
		}
	}
}
};

int main(){
	cout<<"Enter 1 for integer stack and 2 for float stack\n";
	int ch;
	cin>>ch;
	cout<<"Enter the size of the stack\n";
	int s;
	cin>>s;
	if(ch==1)
	{
		Stack_<int>s1(s);
		s1.menu_();
	}
	else
	{
		Stack_<float>s2(s);
		s2.menu_();
	}
	return 0;
}