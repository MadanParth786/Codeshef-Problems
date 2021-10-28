#include<iostream>
using namespace std;
void problem(int a){
	if(1<=a<100){
		cout<<"Easy"<<"\n";
	}
	else if(100<=a<200){
		cout<<"Medium"<<"\n";
	}
	else if(200<=b<300){
		cout<<"Hard"<<"\n";
	}
}
int main(void){
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		problem(a);
	}
}
