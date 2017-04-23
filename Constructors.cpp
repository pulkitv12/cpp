#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
	test(int x,int y)
	{
		a=x;
		b=y;
	}
	void show ()
	{
		cout<<"value of a"<<a;
		cout<<"value of b"<<b;
	}
};
int main()
{
	/*test t1(5,7);
	test t2(15,17);*/
	test t[3]={test(5,7),test(15,17),test(21,20)};
	t[0].show();
	t[1].show();
	t[2].show();
	
}
