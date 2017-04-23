#include<iostream>
using namespace std;
class test
{
static int rate;
int p_val;
public:
    void read()
    {
        cout<<"enter the value of p";
        cin>>p_val;

    }
    void showdata()
    {
    int amount=p_val*rate;
    cout<<amount;
    }
 static void change_rate()
     {
//p_val=6000;
cout<<"enter new rate";
cin>>rate;//15
}

};
//void test::change_rate()
int test::rate=10;
int main()
{
test t[20];//array of objects
int i=0,n=0;
cout<<"enter no. of objects";
cin>>n;
for(i=0;i<n;i++)
{
t[i].read();
}
for(i=0;i<n;i++)
{
t[i].showdata();
}
test::change_rate();
for(i=0;i<n;i++)
{
t[i].showdata();
}
return 0;
}
