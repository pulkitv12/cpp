#include<iostream>
using namespace std;
class base
{
	int priv;
	protected:
		int prot;
		void get()
		{
			priv=75;
		}
	public:
	int pub;
	void disp()
	{
		cout<<priv;
	}
};
class derived : public base{
	public:
	void get1()
	{
		prot=10;
		pub=30;
	}
	void show()
	{
		cout<<prot;
	}
};
main()
{
	derived d;
	d.get1();
	d.show();
	d.disp();
}
