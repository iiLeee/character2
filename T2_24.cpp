
/*
Filename:	T2_24.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2022.3.12
College:	School of computer Science and Informatiomn Engineer
Function	Judge whether a number is either odd or even.
*/
#include<iostream>
using namespace std;

int main()
{
	int a ;
	cout<<"Please enter a :"<<endl;
	cin>>a;
	if(a%2==0){
		cout<<"a is even"<<endl;
	}
	else{
		cout<<"a is an odd number"<<endl;
	}
	return 0;
}