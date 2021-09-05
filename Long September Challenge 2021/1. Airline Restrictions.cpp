#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a,b,c,d,e;
	while(n--){
		cin>>a>>b>>c>>d>>e;
	    if(a+b<=d and c<=e){
		    cout<<"YES"<<"\n";
		}
	    else if(b+c<=d and a<=e){
		cout<<"YES"<<"\n";
	}
	   else if(c+a<=d and b<=e){
		cout<<"YES"<<"\n";
	}
	   else{
		cout<<"NO"<<"\n";
	    } 
	
  }

}
	
