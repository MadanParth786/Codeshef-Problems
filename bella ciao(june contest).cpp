#include<iostream>
using namespace std;
#define l long long;

int main()
{
	l1 n;
	cin>>n;
	l1 D,d,p,q,x;
	while(n--){
		cin>>D>>d>>p>>q;
		l1 count =0;
		x=D/d;
		if(x%2==0){
			count=d*((x/2)*(2*p+(x-1)*q));
		}
		else{
			count=d*(x*(p+((x-1)/2)*q));
		}
		count+=(D%d)*(p+(x)*q);
		cout<<count<<"\n";
		
}
return 0;
}
