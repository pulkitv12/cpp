#include<iostream>
using namespace std;
class day
{
	int days,hours;
	public:
	day(int dys,int hrs)
	{
		days=dys;
		hours=hrs;
	}
	operator int()
	{
		int h;
		h=days*24+hours;
		return h;
	}
	void show()
	{
		cout<<days<<" days and "<<hours<<" hours"<<endl;
	}
};
main()
{
	int hours;
	day d1(2,14);
	d1.show();
	hours=d1;
	cout<<"Hours : "<<hours;
}
