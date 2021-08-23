#include<iostream>
using namespace std;
int main(void)
{
	int n,rat;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>rat;
		if(rat>=2000){
			cout<<1<<"\n";
		}
		else if(rat>=1600 and rat<2000){
			cout<<2<<"\n";
		}
		else{
			cout<<3<<"\n";
		}
	}
}
