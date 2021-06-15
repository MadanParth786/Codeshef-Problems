#include<iostream>
using namespace std;
int main()
{
	int n,c,p;
	cin>>n;
	while(n--){
		cin>>c>>p;
		int r=0;
		for(int i=0;i<p;i++){
			if(c%i>r){
				r=c%i;
			}
			
			
		}
		cout<<r<<"\n";
	}
	return 0;
}
