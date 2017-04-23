#include<iostream>
using namespace std;
class account
{
int balance;
public:
void getbal(int x)
{
balance=x;
}
void operate(account *act,int with)
{
balance=balance-with;//bal updated pf a1;
act->balance=act->balance+with;
}
void disp_bal()
{
cout<<"balance is "<<balance;
}
};


int main()
{
account a1,a2;
a1.getbal(5000);
a2.getbal(7000);
a1.operate(&a2,500);//new concept,object 2 is passed as an argument, object 1(a1) generates the call.
a1.disp_bal();
a2.disp_bal();
return 0;
}
