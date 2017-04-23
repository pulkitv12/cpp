#include<iostream>
using namespace std;
class base
{
	int priv;
	protected:
		int prot;
	public:
	int pub;
};
class derived : public base{
	public:
	void get()
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
	d.get();
	d.show();
}
