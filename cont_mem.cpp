#include<iostream>
using namespace std;
class test
{
int count;
public:
void showdata()
{
cout<<endl<<count;
}
};
int main()
{
test t1,t2;
t1.showdata();
t2.showdata();
return 0;
}
