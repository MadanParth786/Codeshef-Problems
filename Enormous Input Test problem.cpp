#include<iostream>
using namespace std;
int main()
{
	int n,d;
	int a;
	int count=0;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>a;
	     if(a%d==0){
		   count++;
			
		}
	
	cout<<count<<"\n";
  }
	return 0;
     
}
