#include<iostream>
using namespace std;
main()
{
int lb,ub,i,j,x=1,h,k;
int a[11]={0};
cin>>lb>>ub;
for(i=lb;i<=ub;i++)
{
	int c=0;
	for(j=2;j<=i/2;j++)
	{	
		if(i%j==0)
		{
			c++;
			break;
		}	
	}
	if(c==0)
	{
		int num=i;
		while(num!=0)
		{
			h=num%10;
			a[h]++;
			num=num/10;
		}
	}
	
}
for(i=1;i<=10;i++)
cout<<i<<"--"<<a[i]<<endl;
k=a[1];
for(i=1;i<=10;i++)
{
	if(k<a[i])
	k=a[i];
}
cout<<k<<endl;	
}
