#include<iostream>
using namespace std;
int main()
{
	int n,a,b,r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		r=a%b;
		cout<<r<<"\n";
	}
	return 0;
	
	
}
