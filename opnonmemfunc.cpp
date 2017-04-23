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
/*class demo2
{
	int run;
	public:
	demo2()
	{
		run=0;
	}
	void show()
	{
		cout<<run;
	}
	
};*/
demo operator++(demo &dd)
	{
		demo temp;
		dd.run=dd.run+1;
		temp.run=dd.run;
		
		return temp;
	}
main ()
{
	static demo d1,d2;
	//demo2 d2;
	d2=++d1;
	d1.show();
	d2.show();
}
