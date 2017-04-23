#include<iostream>
using namespace std;
class store
{
	private:
		static float disc;
		int amount;
		float tot;
	public:
		void shopp()
		{
			cout<<"Enter the shopping amount"<<endl;
			cin>>amount;
			
		}
		static void change_disc()
		{
			disc=0.05;
		}
		void bill()
		{
			tot=amount-(amount*disc);
			cout<<"Please pay:"<<tot<<endl;
		}
};
float store::disc=0.10;
main()
{
	int i=0;
	store c[10];
	cout<<"Welcome to Pantaloons"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Customer "<<i+1<<":"<<endl;
		c[i].shopp();
		if(i==5)
		{
		store::change_disc();
     	}
		c[i].bill();
		cout<<"Thank you for shopping with us."<<endl;
	}
}
