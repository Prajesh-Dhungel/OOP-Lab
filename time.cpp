#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class TIME{
	int hh;
	int mm;
	int ss;

public:
	TIME(){hh=0;mm=0;ss=0;}
	TIME(int h,int m,int s){
		hh=h;
		mm=m;
		ss=s;
	}
	~TIME(){}
	void getTime();
	friend TIME operator+(TIME , TIME);
	friend TIME operator-(TIME,TIME);
	friend ostream& operator<<(ostream &,TIME &);

};

TIME operator+(TIME T1,TIME T2)
{
	TIME T3;
	T3.ss=(T1.ss+T2.ss)%60;
	T3.mm=(T1.mm+T2.mm)%60+(T1.ss+T2.ss)/60;
	T3.hh=(T1.hh+T2.hh)%24+(T1.mm+T2.mm)/60;
	T3.hh=T3.hh%24;
	T3.mm=T3.mm%60;
	T3.ss=T3.ss%60;
	return T3;
}

TIME operator-(TIME T1,TIME T2)
{

	TIME T3;
	T3.ss=(abs(T1.ss-T2.ss))%60;
	T3.mm=abs(T1.mm-T2.mm)%60+abs(T1.ss-T2.ss)/60;
	T3.hh=abs(T1.hh-T2.hh)%24+abs(T1.mm-T2.mm)/60;
	T3.hh=T3.hh%24;
	T3.mm=T3.mm%60;
	T3.ss=T3.ss%60;
	// if(T3.hh<0)
	// 	T3.hh=-T3.hh;
	// if(T3.mm<0)
	// 	T3.mm=-T3.mm;
	// if (T3.ss<0)
	// 	T3.ss=-T3.ss;
	
	return T3;
}

void TIME::getTime()
{
	cout<<"Enter the hours,minutes and seconds in 24-hour format\n";
	cin>>hh>>mm>>ss;

}

ostream & operator<<(ostream &dout,TIME &t)
{
	dout<<t.hh<<" : "<<t.mm<<" : "<<t.ss<<endl;
	return dout;
}

int main()
{
	TIME t2,t3,t4;
	cout<<"Enter the time 1:\n"<<endl;
	int h;
	int m;
	int s;
	cout<<"Enter the hours,minutes and seconds in 24-hour format\n";
	cin>>h>>m>>s;
	TIME t1(h,m,s);
	cout<<"Enter the time 2:\n";
	t2.getTime();
	t3=t1+t2;
	t4=t1-t2;
	cout<<"The sum of two times is:\n";
	cout<<t3;
	cout<<"The difference of two times is:\n";
	cout<<t4;

	return 0;

}


