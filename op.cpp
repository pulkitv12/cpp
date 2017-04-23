#include<iostream>
#include<strings.h>
using namespace std;
class demo
{
	char str[20];
	public:
	demo()
	{
	}
	demo(const char str1[10])
	{
		strcpy(str,str1);
	}
	demo operator+(demo dd2)
	{
		demo temp;
		strcpy(temp.str,str);
		strcat(temp.str,dd2.str);
		return temp;
	}
	void show()
	{
		cout<<str;
	}
};
main ()
{
	demo d1("himachal");
	demo d2("pradesh");
	demo d3;
	d3=d1+d2;
	//d1.show();
	//d2.show();
	d3.show();
}
