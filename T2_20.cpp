/*
Filename:	T2_20.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2002.3.12
College:	School of computer Science and Informatiomn Engineer
Function	Output the parameter of the circle.
*/
#include<iostream>
using namespace std;

int main()
{
	int r;
	cout<<"Please enter a valuable r :"<<endl;
	cin>>r;
	double d,c,s;
	double pi=3.14159;
	cout<<"d is "<<2*r<<"\n";
	cout<<"c is "<<2*pi*r<<"\n";
	cout<<"s is "<<pi*r*r<<"\n";
	return 0;
}