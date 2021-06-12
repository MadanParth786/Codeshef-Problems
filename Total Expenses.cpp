#include<iostream>
#include <iomanip> 
using namespace std;
int main()
{
	int n,a,b;
	float d,r;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a>1000){
			r=(float(a)*float(b))*0.10;
			d=(float(a)*float(b))-r;
			cout<<setprecision(6)<<fixed<<d<<"\n";
	    }
	    else{
	    	cout<<setprecision(6)<<fixed<<(float(a)*float(b))<<"\n";
		}
	}
	return 0;
}
