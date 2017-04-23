#include<iostream>
using namespace std;
//Pointer to non-mem_fun
int main()
{
    int add(int,int);
    int (*adptr)(int,int);
    int x=10;
    int y=20;
    adptr=add;
    cout<<add(x,y)<<endl;
    cout<<(*adptr)(x,y)<<endl;
}
int add(int a,int b)
{
    return (a+b);
}
//Pointer to mem_fun
int main()
{
    test *tptr;
    int (test::*tptr)(x,y);
    tptr=&test::create;
    cout<<t.(*tptr)();
}
//Pointer to data member
int main()
{
    test *tptr;
    int (test::tptr);
    tptr=&test::l;
    t.(*tptr)=7;
    cout<<t.l;
}
