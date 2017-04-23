#include<iostream>
using namespace std;
class mcd
{
	private:
		friend int main();
		static int pbg;
		static int ppf;
		static int pic;
		static int pwr;
		static int pff;
		int nb,np,ni,nw,nf;
		int sale;
		char loc[15];
	public:
		void data()
		{
			cout<<"\nEnter outlet location:";
			cin>>loc;
			cout<<"Enter number of Burgers sold:";
			cin>>nb;
			cout<<"Enter number of Puffs sold:";
			cin>>np;
			cout<<"Enter number of Icecreams sold:";
			cin>>ni;
			cout<<"Enter number of Wraps sold:";
			cin>>nw;
			cout<<"Enter number of French Fries sold:";
			cin>>nf;
		}
		void calc()
		{
			sale=pbg*nb+ppf*np+pic*ni+pwr*nw+pff*nf;
		}
		void disp()
		{
			cout<<"\nTotal Sale for "<<loc<<" outlet:"<<sale<<endl;
		}
		void sort(mcd x[],int size)
		{
			mcd temp;
			int j,k;
			for(j=0;j<size;j++)
			{
				for(k=0;k<size-1;k++)
				{
					if(x[k].sale<x[k+1].sale)
					{
						temp=x[k];
						x[k]=x[k+1];
						x[k+1]=temp;
					}
					
				}
			}
		}
};

int mcd::pbg=70;
int mcd::ppf=100;
int mcd::pic=40;
int mcd::pwr=80;
int mcd::pff=50;
int main()
{
	mcd m[10],m2;
	int i,n=2;
	cout<<"Welcome to McDonalds"<<endl;
	for(i=0;i<n;i++)
	{
		m[i].data();
		m[i].calc();
	}
	m2.sort(m,n);
	for(i=0;i<n;i++)
	{
		m[i].disp();
	}
}
