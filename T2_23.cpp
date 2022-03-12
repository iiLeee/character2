/*
Filename:	T2_23.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2022.3.12
College:	School of computer Science and Informatiomn Engineer
Function	Output the maxmum and minmum values in the number of five.
*/
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	int max,min;
	cout<<"Please enter five numbers :"<<endl;
	cin>>a>>b>>c>>d>>e;
	if(a>b){
		max=a;
	}
	else {
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	if(e>max){
		max=e;
	}
	if(a>b){
		min=b;
	}
	else{
		min=a;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	if(e<min){
		min=e;
	}
	cout<<"max is "<<max<<endl<<"min is "<<min<<endl;
	return 0;
}