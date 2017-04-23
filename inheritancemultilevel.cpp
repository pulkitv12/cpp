#include<iostream>
using namespace std;
class base
{
	int priv;
	protected:
		int prot;
	public:
		void read()
		{
			cout<<"read";	
		}
};
class derived1 : public base
{
	public:
		void read3()
		{
			cout<<"derived1";	
		}
};
class derived2:public derived1
{
	public:
		void read2()
		{
			cout<<"derived2";	
		}
};
main()
{
	derived2 d;
	d.read();
}
