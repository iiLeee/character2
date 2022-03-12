
/*
Filename:	T2_19.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2022.3.12
College:	School of computer Science and Informatiomn Engineer
Function	Output three numbers of sum, average,product,smallest,largest.
*/
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Input three diffrerent integer: "<<endl;
	cin>>a>>b>>c;
	int Sum ,Average ,Product ,Smallest ,Largest;
	
	cout<<"Sum is "<<a+b+c<<endl;
	cout<<"Average is "<<(a+b+c)/3<<endl;
	cout<<"Product is "<<a*b*c<<endl;
	if(a>b){
		Smallest=b;
	}
	else {
		Smallest=a;
	}
	if(Smallest>c){
		Smallest=c;
	}
	cout<<"Smallest is "<<Smallest<<endl;
	if(a>b){
		Largest=a;
	}
	else {
		Largest=b;
	}
	if(Largest<c){
		Largest=c;
	}
	cout<<"Largest is "<<Largest<<endl;
	return 0;
}