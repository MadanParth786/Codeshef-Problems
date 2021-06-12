#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	while(n--){
		cin>>a;
		int flag=0;
	
		for(int i=2;i<=a;i++){
			if(a%i==0)
			    flag++;
		}
			if(flag==1){
				cout<<"yes"<<"\n";
			}
			else{
				cout<<"no"<<"\n";
			}
}
	
	return 0;
}
