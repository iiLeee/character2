/*
Filename:	T2_25.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2022.3.12
College:	School of computer Science and Informatiomn Engineer
Function	Determine whether the first number is a multiple of the second number.
*/
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Please enter a and b :"<<endl;
	cin>>a>>b;
	
	if(a%b==0){
		cout<<"a is a multiple of b."<<endl;
		
	}
	else{
		cout<<"a is not a multiple of b."<<endl;
	}
	return 0;
}