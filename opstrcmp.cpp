#include<iostream>
#include<strings.h>
using namespace std;
class demo
{
	char str[20];
	int l;
	public:
	demo()
	{
	}
	demo(const char str1[10])
	{
		strcpy(str,str1);
	}
	int operator>(demo dd2)
	{
		demo temp;
		temp.l=strcmp(str,dd2.str);
		if(temp.l)
		return temp.l;
	}
	
};
main ()
{
	demo d1("pradesh");
	demo d2("timachal");
	if(d1>d2)
	{
	cout<<"s1 is greater";
	}
	else
	{
	cout<<"s2 is greater";
	}
	
}
