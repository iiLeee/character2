/*
Filename:	T2_28.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2022.3.12
College:	School of computer Science and Informatiomn Engineer
Function	The decomposition output is a five-digit one.
*/
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	cin>>a;
	b=a/10000;
	c=a/1000%10;
	d=a%1000/100;
	e=a%100/10;
	f=a%10;
	
	cout<<b<<"   "<<c<<"   "<<d<<"   "<<e<<"   "<<f<<endl;
	return 0;
}