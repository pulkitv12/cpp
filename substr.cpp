#include<iostream>
#include<string.h>
using namespace std;
main()
{
   char s[100];
   char t[4][100];
   cin>>s;
   cin>>t[1];//t2>>endl>>t3>>endl;
   int l[4];
   l[1]=strlen(t[1]);
   l[2]=strlen(t[2]);
   l[3]=strlen(t[3]);

   	//if(l[1]>l[2]&&l[1]>l[3])
   	{
   	int x=strstr(t[1],s);
	   cout<<x;	
   	}
}
