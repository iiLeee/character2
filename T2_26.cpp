/*
Filename:	T2_26.cpp
Author:		Yifei Li
E-mail:		2236778865@qq.com
Date:		2022.3.12
College:	School of computer Science and Informatiomn Engineer
Function	Output a design.
*/
#include<iostream>
using namespace std;

int main()
{
	cout<<"* * * * * * * *"<<endl;
	cout<<" * * * * * * * *"<<endl;
	cout<<"* * * * * * * *"<<endl;
	cout<<" * * * * * * * *"<<endl;
	cout<<"* * * * * * * *"<<endl;
	cout<<" * * * * * * * *"<<endl;
	cout<<"* * * * * * * *"<<endl;
	cout<<" * * * * * * * *"<<endl<<endl;
	
	int i;
	for(i=1;i<=8;i++){
		if(i%2==0){
			cout<<" * * * * * * * *"<<endl;
		}
		else{
			cout<<"* * * * * * * *"<<endl;
		}
	}
	
	return 0;
}