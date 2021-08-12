#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int g1,s1,b1,g2,s2,b2;
	while(n--){
		cin>>g1>>s1>>b1>>g2>>s2>>b2;
		int r1=g1+s1+b1;
		int r2=g2+s2+b2;
		if(r1>r2){
			cout<<1<<"\n";
		}
		else{
			cout<<2<<"\n";
		}
	}
}
