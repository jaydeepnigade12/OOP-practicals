#include<iostream>
using namespace std;

class Complex
{
	float real;
	float img;
	public:
	void get()
	{
		cout<<"\nReal part\tImaginary part\n";
		cin>>real>>img;
	}
	void display()
	{
		cout<<real<<"+"<<img<<"i";
	}
	Complex operator + (Complex c2)
	{
		Complex c3;
		c3.real=real+c2.real;
		c3.img=img+c2.img;
		return c3;
	}
	Complex operator * (Complex c2)
	{
		Complex c4;
		c4.real=(real*c2.real)-(img*c2.img);
		c4.img=(img*c2.real)+(real*c2.img);
		return c4;
	}
};
int main()
{
	Complex c1,c2,c3,c4;
	int ch;
	do
	{	
		cout<<"\n\n1.Accept Data\n";
		cout<<"2.Display Data\n";
		cout<<"3.Addition\n";
		cout<<"4.Multiplication\n";
		cout<<"5.Exit\n\n";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nEnter First Number :\n";
			c1.get();
			cout<<"\nEnter Second Number :\n";
			c2.get();
			break;
		case 2:
			cout<<"\nFirst Number :\n";
			c1.display();
			cout<<"\nSecond Number :\n";
			c2.display();
			break;
		case 3:
			c3=c1+c2;
			cout<<"\nAddition: \n";
			c3.display();
			break;
		case 4:
			c4=c1*c2;
			cout<<"\nMultiplication: \n";
			c4.display();
			break;
		default:
			if(ch!=5)
			cout<<"\nWrong Choice !";
			break;
		}
	}
	while(ch!=5);
	return 0;
}
