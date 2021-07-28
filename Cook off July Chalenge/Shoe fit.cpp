#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a,b,c;
	while(n--){
		cin>>a>>b>>c;
		if((a==0 and b==0 and c==0) or (a==1 and b==1 and c==1)){
			cout<<0<<"\n";
		}
		else{
			cout<<1<<"\n";
		}
	}
}
