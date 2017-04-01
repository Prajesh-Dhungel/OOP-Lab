#include <iostream>

using namespace std;

template<class T>

class Arr{
	T *a;
	int size;
public:
	Arr():size(0),a(new T[1]){}
	Arr(T x[],int s):size(s),a(new T[s+1]){
		for(int i=0;i<size;i++)
			a[i]=x[i];
	}

	void display();
	void min_max();
};

template<class T>
void Arr<T>::display()
{
	cout<<"The given array is:\n";
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

template<class T>
void Arr<T>::min_max()
{
	T min=a[0];
	T max=a[0];

	for(int i=1;i<size;i++)
	{
		if(a[i]<min)
			min=a[i];
		else if(a[i]>max)
			max=a[i];
	}
	cout<<"The maximum element in array is: "<<max<<endl;
	cout<<"The minimum element in array is: "<<min<<endl;

}

int main()
{
	int x[5]={1,3,4,7,8};
	float y[5]={1.3,2.4,4.6,2.9,7.8};

	Arr<int>a1(x,5);
	Arr<float>a2(y,5);

	a1.display();
	a1.min_max();

	a2.display();
	a2.min_max();
	return 0;
}