#include<iostream>
using namespace std;
class test
{
	int a,b,c;
	public:
	test(int x=5,int y=10,int z=4)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
	}
};
int main()
{
	test t2(15,4);
	test t1;
	test t3(20,25,30);
	t1.show();
	t2.show();
	t3.show();
	return 0;
}
