#include<iostream>
using namespace std;
int main(void)
{
	double n,a,b,c,d;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		
		if((a<b or b<a) and (c<d or d<c) ){
			cout<<2<<"\n";
		}
		else if((a<c or c<a) and (b<d or d<b)){
			cout<<2<<"\n";
		}
		else if((a<d or d<a) and (b<c or c<b)){
			cout<<2<<"\n";
		}
		else if(a==b and c==d and d==a){
			cout<<0<<"\n";
		}
		else {
			cout<<1<<"\n";
		}
		
	}
}
