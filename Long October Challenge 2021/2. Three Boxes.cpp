#include<iostream>
using namespace std;
int main(void)
{
	int t,a,b,c,d;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		if(a+b+c<=d ){
			cout<<"1"<<"\n";
		}
		else if(c+a<=d) or b+a<=d{
			cout<<"2"<<"\n";
		}
		else{
			cout<<"3"<<"\n";
		} 
		
	}
}
