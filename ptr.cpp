#include<iostream>
using namespace std;
class test
{
    int roll;
    char name[50];
    int prcnt;
public:
    void set()
    {
        cout<<"enter the details";
        cin>>roll;
        cin>>name;
        cin>>prcnt;


    }
    test calculate(test tt2)
    {
        if(prcnt>tt2.prcnt)
        {
            return (*this);

        }
        else
        {
            return tt2;
        }
    }
    void show()
    {

        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<prcnt<<endl;
    }


};
int main()
{
    test t1,t2,t3;
    t1.set();
    t2.set();
    t3=t1.calculate(t2);
    t3.show();
    return 0;

}

