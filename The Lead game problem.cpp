#include<iostream>
using namespace std;
int main()
{
	int n,s,t,l1=0,l2=0,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s>>t;
		if(s>t){
			x=s-t;
			l1=max(l1,x);
		}
		else{
			x=t-s;
			l2=max(l2,x);
		}
	}
		if(l1>l2){
			cout<<1<<" "<<l1<<"\n";
		}
		else{
			cout<<2<<" "<<l2<<"\n";
		}
	
	return 0;
	
}
