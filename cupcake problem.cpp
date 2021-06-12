#include<iostream>
using namespace std;
int main()
{
	int n,a,r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
	    if(a-n==0){
			cout<<a<<"\n";
		}
		else{
			r=a/2+1;
			cout<<r<<"\n";
		}
		
	}
	return 0;
}
