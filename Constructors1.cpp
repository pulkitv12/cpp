#include<iostream>
using namespace std;
class data
{
	int a;
	public:
	data();
	void show();
	data(data &);
};
data::data()
{
	a=7;
}
void data::show()
{
	cout<<"Value of a="<<a;
}
data::data(data &obj)
{
	a=obj.a++;
}
int main()
{
	data d1;
	data d2;
	d1.show();
	d2.show(d1);
}
