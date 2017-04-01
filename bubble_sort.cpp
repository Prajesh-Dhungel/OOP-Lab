#include <iostream>

using namespace std;

template<class T>

class Bubble_sort{
	T *a;
	int size;
public:
	Bubble_sort():size(0),a(new T[1]){}
	Bubble_sort(T x[],int s):size(s),a(new T[s+1]){
		for(int i=0;i<s;i++)
			a[i]=x[i];
	}
	void display();
	void sort_();

};

template<class T>
void Bubble_sort<T>::sort_()
{
	int n=size;
	T temp;
	for(int i=0;i<n-1;i++)
		for(int j=1;j<n-i;j++)
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
}

template<class T>
void Bubble_sort<T>::display()
{
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main()
{
	int x[5]={20,30,10,60,40};
	float y[5]={1.1,2.3,0.7,4.8,3.9};

	Bubble_sort <int>b1(x,5);
	Bubble_sort <float>b2(y,5);

	cout<<"Sorted int array:\n";
	b1.sort_();
	b1.display();

	cout<<"Sorted float array:\n";
	b2.sort_();
	b2.display();
	return 0;

}
