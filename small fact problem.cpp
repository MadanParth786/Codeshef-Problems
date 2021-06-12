#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int r=1;
		while(a>0){
			r=r*a;
			a--;
		}
		cout<<r<<"\n";
	}
	return 0;
}
