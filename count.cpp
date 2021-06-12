#include<iostream>
using namespace std;
int main()
{
	int n,a,r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int count =0;
		while(a>0){
			r=a%10;
			if(r==4){
				count++;
			}
			
			a=a/10;
		}
		cout<<count<<"\n";
	}
	return 0;
	
}
