#include<iostream>
using namespace std;
class app
{
	private:
		int bal=0,count=0,amt=0;
		double num;
	public:
		void add_bal();
		void check_cc();
		void rech();
		void coup();
		void show_bal();
		void tran_bal();
};
int num_len(long long int x)
{
	int lengthcount = 0;
	for(; x != 0; x /= 10, lengthcount++);
	return lengthcount;

}

void app::add_bal()
{
	long long int ccno;
	int amt=0;
	cout<<"Enter credit card 16 digit number:";
	cin>>ccno;
	if(num_len(ccno)!=16)
	{
		cout<<"Credit card no is not correct. Please Try again"<<endl;
		cin>>ccno;
	}
	cout<<endl<<"Enter amount:"<<endl;
	cin>>amt;
	bal=bal+amt;
}
void app::check_cc()
{
	
}
void app::show_bal()
{
	cout<<"Current balance in your wallet is:"<<bal<<endl;
}
void app::rech()
{
	char op[10][15]={"Airtel","Idea","Reliance","Vodafone","Tata Docomo"};
	int o,x;
	cout<<"Enter mobile number:";
	cin>>num;
	x=num/1000000;
	if(x==9876||x==8288)
	o=0;
	else if(x==8872||x==9592)
	o=1;
	else if(x==9023||x==9316)
	o=2;
	else if(x==8054||x==7508)
	o=3;
	else if(x==7696||x==9041)
	o=4;
	cout<<"Operator(Auto-Detect):"<<op[o]<<endl;
	cout<<endl<<"Enter amount:";
	cin>>amt;
	cout<<"Your account is recharged with Rs:"<<amt<<endl;
	bal=bal-amt;
}
void app::coup()
{
	char coupons[10][10]={"GRAB5","OFF10","OFF20","GET15"};
}
main()
{
	app c1;
	c1.add_bal();
	c1.show_bal();
	c1.rech();
	c1.show_bal();
}
