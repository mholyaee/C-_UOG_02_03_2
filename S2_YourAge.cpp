#include<iostream>
using namespace std;
int main()
{
	int y,m,d;
	cin>>y>>m>>d;
	// We suppose that each month has 30 days!
	cout<<"Your spended day:"<<y*365+m*30+d;
	
}
