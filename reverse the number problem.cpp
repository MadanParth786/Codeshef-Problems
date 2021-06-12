#include<iostream>
using namespace std;
int main()
{
	int n,a;
	int r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int s=0;
		while(a!=0){
			r=a%10;
			s=s*10+r;
			a=a/10;
		}
		cout<<s<<"\n";
   }
	 
	 
	 return 0;
}
