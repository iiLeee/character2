/*
Filename:	T2_18.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2002.3.11
College:	School of computer Science and Informatiomn Engineer
Function	Outputs the larger number of the two numbers. 
*/
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<"is large.";
	}
	if(a<b)
	{
		cout<<b<<"is large.";
		
	}
	if(a==b)
	{
		cout<<"These number is equal."<<endl;
	}
	return 0;
}