#include<iostream>
using namespace std;
int main()
{
	int n,a,d;
	cin>>n;
	for(int i=0;i<n;i++){
	
		cin>>a;
		int num=a;
		int r=0;
		while(num!=0){
		
			d=num%10;
			r=(r*10)+d;
			num=num/10;
		}
		if(a==r){
			cout<<"wins"<<"\n";
			}
			else{
				cout<<"loses"<<"\n";
			}
	 
	}
	return 0;
}


