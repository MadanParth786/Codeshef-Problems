#include<iostream>
using namespace std;
int main(void)
{
	int n,a,b,c,d;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		if(a==b==c or a==b==d or b==c==d or c==d==a or d==a==b or a==b==c==d){
			cout<<"No"<<"\n";
		}
		else{
			cout<<"Yes"<<"\n";
		}
	}
}
