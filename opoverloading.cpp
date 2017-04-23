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
	demo operator++()
	{
		demo temp;
		run=run+1;
		temp.run=run;
		return temp;
	}
	void show()
	{
		cout<<run;
	}
};
main ()
{
	demo d1,d2;
	d2=++d1;
	d1.show();
	d2.show();
}
