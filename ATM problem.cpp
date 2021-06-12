#include<iostream>
using namespace std;
int main()
{
	int a;
	float b;
	cin>>a>>b;
	if(b>=(float(a)+0.50) && b>0 && a%5==0){
		float withdraw=b-float(a)-0.50;
		cout<<withdraw;
	}
	else{
		cout<<b;
	}
	return 0;
}
