#include<iostream>
#include<string.h>
using namespace std;
class cinema
{
	char *movie;
	char *time;
	int len1,len2;
	public:
		cinema(char *x1,char *x2)
		{
			len1=strlen(x1);
			len2=strlen(x2);
			movie=new char[len1+1];
			time=new char[len2+1];
			strcpy(movie,x1);
			strcpy(time,x2);
		}
		void show()
		{
			 cout<<"Name of the movie is "<<movie<<endl;
			 cout<<"Timings of the movie is "<<time<<endl;
		}
};
int main()
{
cinema chd_pvr("Sherlock Holmes", "3:00 PM");
cinema zirk_pvr(chd_pvr);
cinema moh_pvr(zirk_pvr);
cout<<"Displaying information at Chandigarh\n";
chd_pvr.show();
cout<<"Displaying information at Zirakhpur\n";
zirk_pvr.show();
cout<<"Display information at Mohali\n";
moh_pvr.show();
return 0;
}

