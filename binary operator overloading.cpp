#include<iostream>
using namespace std;
//overloading binary operator "+"
/*class complex
{
	int r,i;
	public:
		void get()
		{
			cout<<"enter complex number \n";
			cin>>r;
			cin>>i;
		}
		complex operator+(complex c2)
		{
			complex c;
			c.r=r+c2.r;
			c.i=i+c2.i;
			return c;
			
		}
		void show()
		{
			cout<<r<<"+"<<i<<"i";
		}
};*/
/*int main()
{	complex c1,c2,c3;
	c1.get();
	c2.get();
	c3=c1+c2;
	c3.show();
	return 0;
}*/

//using bhot saareh object
/*int main()
{	complex c1,c2,c3,c4,c5,c6;
	c1.get();
	c2.get();
	c3.get();
	c4.get();
	c5.get();
	c6=c1+c2+c3+c4+c5;
	c6.show();
	return 0;
}*/

//using friend function
/*class complex
{
	int r,i;
	public:
		void get()
		{8
		
			cout<<"enter complex number \n";
			cin>>r;
			cin>>i;
		}
	friend complex operator+(complex,complex);
		void show()
		{
			cout<<r<<"+"<<i<<"i";
		}
};
complex operator+(complex c1,complex c2)
	{
			complex c;
			c.r=c1.r+c2.r;
			c.i=c1.i+c2.i;
			return c;	
	}
int main()
{	complex c1,c2,c3;
	c1.get();
	c2.get();
	c3=c1+c2;
	c3.show();
	return 0;
}*/
