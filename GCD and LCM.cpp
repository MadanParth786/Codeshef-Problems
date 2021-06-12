#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		int gcd=1,lcm=1;
		for(int i=0;i<1000;i++){
		
		if((a%i==0) && (b%i==0)){
			gcd=i;
	   }  
	}
		lcm=(a+b)/gcd;
		cout<<lcm<<" "<<gcd<<"\n";
	}
	return 0; 
}
