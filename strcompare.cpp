#include<iostream>
#include<string.h>
using namespace std;
class data
{
	char *a;
	int i,len;
	public:
	data (char *x)
	{
		len=strlen(x);
		a=new char[len+1];
		strcpy(a,x);
	}
	void compare(data &obj)
	{
		i=strcmp(a,obj.a);
	}
	void show()
	{
		if(i==0)
		cout<<"Strings are same"<<endl;
		else
		cout<<"Strings are different"<<endl;
	}
	~data()
	{
		cout<<"Memory released for "<<a<<endl;
		delete[] a;
	}	
};
int main()
{
data d1("obfuscation");
data d2("obstruction");
d1.compare(d2);
d1.show();
return 0;
}
