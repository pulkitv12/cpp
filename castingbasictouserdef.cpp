#include<iostream>
using namespace std;
class day
{
	int days,hours;
	public:
	day(int hrs)
	{
		days=hrs/24;
		hours=hrs%24;
	}
	void show()
	{
		cout<<days<<" days and "<<hours<<" hours";
	}
};
main()
{
	int hr=62;
	day d1=hr;
	d1.show();
}
