#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(a+b+c<=180){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}

