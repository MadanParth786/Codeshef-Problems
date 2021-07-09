#include<iostream>
using namespace std;
int main(void)
{
	int n,a,b,c;
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		if(b>a){
			int d=b-a;
			int r=d/c;
			cout<<r<<"\n";
		}
	}
}
