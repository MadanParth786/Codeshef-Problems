#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n--){
		int x,d,h,sum=0;
		cin>>x>>d>>h;
		int a[x];
		for(int i=0;i<x;i++){
           cin>>a[i];   
			if(a[i]>0){
				sum+=a[i];
			}
			else{
				if(sum<d){
				
				  sum=0;
				  
			}
			else{
			
				sum=sum-d;
			}
   }
}
		if(sum<=h){
				cout<<"NO"<<"\n";
			}
			else{
				cout<<"YES"<<"\n";
			}
	}
}
