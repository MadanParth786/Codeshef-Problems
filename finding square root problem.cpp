#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int sq=0;
		sq=round(sqrt(a));
		cout<<sq<<"\n";
	}
	return 0;
}
