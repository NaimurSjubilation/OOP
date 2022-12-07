#include<iostream>
using namespace std;
int main(){ int a,b,temp;
	cout<<"1st number = ";
	cin>>a;
	cout<<"2nd number = ";
	cin>>b;
	temp=a; a=b; b=temp;
	cout<<"After swapping:\n1st number = "
	<<a<<" & "<<"2nd number = "<< b;}
// cout<<"After swapping:\nfirst number ="<<a<< "\nsencond number ="<<b;
