#include<iostream>
using namespace std;
int main()
{
	int n,a;
	int r,s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		r=a%10;
		s=a;
		while(a>=10){
			a=a/10;
		}
		s=a;
		int sum=r+s;
		cout<<sum<<"\n";
		
	}
	return 0;
}
