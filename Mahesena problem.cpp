#include<iostream>
using namespace std;
int main()
{
	int n,odd,even,a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		odd=0;
		even=0;
	}
	for(int i=0;i<n;i++){
	
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
  }
        if(even>odd){
			cout<<"READY FOR BATTLE"<<"\n";
		}
		else{
			cout<<"NOT READY"<<"\n";
		}
	return 0;
	
}
