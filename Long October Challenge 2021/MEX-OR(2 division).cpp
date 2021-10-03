#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		if(t==0){
			cout<<"1"<<"\n";
		}
		else if(t==1){
			cout<<"2"<<"\n";
		}
		else if(t==2){
			cout<<"2"<<"\n";
		}
		else if(t & (t-1)==0){
			cout<<t<<"\n";
		}
		else{
			int ans=1;
			while(2*ans<=t){
				ans*=2;
			}
			if(ans==t){
				cout<<t<<"\n";
			}
			else if(t==(2*ans-1)){
			    cout<<t+1<<"\n";
			}
			else{
				cout<<ans<<"\n";
			}
		}
	}
}
