#include<iostream>
#include<cmath>
using namespace std;
int sum(int a,int b)
{
	return a+b; 
}
int sub(int a,int b)
{
	return a-b;
}
int pro(int a,int b)
{
	return a*b;
}
int quo(int a,int b)
{
	return a/b;
}
int reme(int a,int b)
{
	return a%b;
}
int sqrt(int a,int b)
{
	return (a,b);
}
int log(int a ,int b)
{
	return (a,b);
}
int main()
{
	int a,b;
	cout<<"Enter a first number :";
	cin>>a;
	cout<<"Enter a second number :";
	cin>>b;
	cout<<"SUM is  "<<sum(a,b)<<endl;
	cout<<" SUBTRACTION is "<<sub(a,b)<<endl;
	cout<<" PRODUCT is  "<<pro(a,b)<<endl;
	cout<<" QUOTIENT is "<<quo(a,b)<<endl;
	cout<<" REMINDER is "<<reme(a,b)<<endl;
	cout<<" SQURE ROOT is "<<sqrt(a,b)<<endl;
	cout<<" LOG is "<<log(a,b)<<endl;
	return 0;
}