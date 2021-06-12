#include<iostream>
using namespace std;
int main()
{
	int n,x,y;
	int sum[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		sum[i]=x+y;
		}
		for(int i=0;i<n;i++){
			
		
		cout<<sum[i]<<"\n";	
	}
	
	return 0;
}
