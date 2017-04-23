#include<iostream>
using namespace std;
class demo
{
	int run;
	public:
	demo()
	{
		run=0;
	}
	friend demo operator++(demo &);
	void show()
	{
		cout<<run;
	}
};
demo operator++(demo &dd)
	{
		demo temp;
		temp.run=dd.run+1;
		dd.run=dd.run+1;
		return temp;
	}
main ()
{
	demo d1,d2;
	d2=++d1;
	d1.show();
	d2.show();
}
