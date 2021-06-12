#include<iostream>
using namespace std;
int main()
{
	int n,a,b,C,D;
	cin>>n;
	while(n--){
		cin>>a>>b>>C>>D;
		int r=C/a;
		int s=D/b;
		cout<<r+s<<"\n";
	}
	return 0;
}
