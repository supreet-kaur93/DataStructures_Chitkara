#include<iostream>
using namespace std;
int main()
{
	string s;
	int no=0,i=0;
	cin>>s;
	while(s[i]!='\0')
	{
		no=no*10+s[i]-'0';
		i++;
	}
	cout<<no;
}
