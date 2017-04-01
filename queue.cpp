//Write a C++ program to create a class called QUEUE with appropriate data members.
//Demonstrate the followings concepts by implementing suitable behaviors:
//Constructors and destructors.
//Exception handling to take care of queue empty and queue full conditions.
//
//Member functions to add an element and to delete an element from the queue.
//Write a menu based program to illustrate operations on a Queue

#include<iostream>

using namespace std;
#define MAX_SIZE 5
class Queue{
  int f;
  int r;
  int *q;

public:
  Queue(){
    f=-1;
    r=-1;
    q=new int[MAX_SIZE+1];
  }
void add_ele(int ele){


  if(r==MAX_SIZE)
  {
    cout<<"Queue Overflow\n";
    return;
  }
  q[++r]=ele;
  cout<<ele<<" is inserted at the rear of the Queue\n";
  if (f==-1)
  f=0;
}

void delete_ele(){
  if(f==-1)
  {
    cout<<"Queue Empty\n";
    return;
  }
  int data=q[f];
  if(f==r)
  f=r=-1;
  else
  f++;
  cout<<data<<" is deleted from the queue\n";
}
~Queue(){
  delete q;
}

void display(){
  cout<<"FRONT-> ";
  for(int i=f;i<=r;i++)
  {

    cout<<q[i]<<" ";
  }
  cout<<"<-Rear\n";
}

};

int main()
{
  Queue q1;

  int ch,data;
  while(1){
    cout<<"Enter your choice:\n"<<"1.Insert 2.Delete 3.Display 4:Exit\n";
    cin>>ch;
    switch(ch)
  {
      case 1: cout<<"Enter the element\n";
            cin>>data;
            q1.add_ele(data);
            break;
      case 2: q1.delete_ele();
            break;
      case 3: q1.display();
            break;
      case 4: return 0;
            break;
      default: cout<<"Invalid choice\n";
             return 0;
  }
}
  return 0;
}
