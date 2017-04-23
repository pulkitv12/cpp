#include<iostream>
#include<string.h>
using namespace std;
class vacation
{
	char state[50];
	char city[5][50];
	int i,j;
	public:
	vacation()
	{
		cout<<"Enter State"<<endl;
		cin>>state;
		cout<<"Enter 5 Cities"<<endl;
		for(i=0;i<5;i++)
			{
				cin>>city[i];
			}
	}
	vacation(int x)
	{
		
	}
	void sort()
	{
		char temp[50];
		for(int p=0;p<5-1;p++)
		{
		for(i=0;i<5-p-1;i++)
			{
				if(strcmp(city[i],city[i+1])>0)
				{
						strcpy(temp,city[i]);
						strcpy(city[i],city[i+1]);
						strcpy(city[i+1],temp);
				}
			
			}
		}
	}
	void show()
	{
		cout<<"For "<<state<<endl;
		cout<<"You can visit :"<<endl;
		for(i=0;i<5;i++)
			cout<<city[i]<<endl;
	}
	void obj_sort(vacation obj[],int n)
	{
		vacation temp(1);
		for(int p=0;p<2-1;p++)
		{
		
		for(i=0;i<2-p-1;i++)
			{
				if(strcmp(obj[i].state,obj[i+1].state)>0)
				{
						temp=obj[i];
						obj[i]=obj[i+1];
						obj[i+1]=temp;
				}

			}
		}
	}
};
int main()
{
	int n=2,x,y;
	vacation v[n];
	vacation v2(1);
		for(x=0;x<n;x++)
	{
		v[x].sort();
	}
	v2.obj_sort(v,n);
	for(x=0;x<n;x++)
	{
		v[x].show();
	}
}
