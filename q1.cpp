#include<iostream>
using namespace std;
main()
{
int ar1[] = {1, 5, 10, 20, 40, 80};
int ar2[] = {6, 7, 20, 80, 100};
int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} ;
int a[100]={0};
int x,y,z,l=0,k=0,i,fl=0,flag=0;
cin>>x>>y>>z;
for(l=0;l<x;l++)
{
	for(i=0;i<y;i++)
	{
		if(ar1[l]==ar2[i])
		{
			fl=1;
			break;
		}
	}
	for(i=0;i<z;i++)
	{
		if(ar1[l]==ar3[i])
		{
			flag=1;
			break;
		}
	}
}
for(i=0;i<k;i++)
    cout<<a[i]<<endl;
/*if(fl==flag==1)
{
a[k]=ar1[l];
k++;
}
}
//for(i=0;i<k;i++)
  //  cout<<a[i]<<endl;*/
}
