#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int sum=0;
		while(a>0){
		sum+=a%10;
	    a/=10;
	    
	}
		cout<<sum<<"\n";	
	}

	return 0;
	
}
