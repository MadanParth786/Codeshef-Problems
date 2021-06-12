#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a<10){
			cout<<"Thanks for helping Chef!"<<"\n";
		}
		else{
			cout<<-1<<"\n";
		}
	}
	return 0;
	
}
