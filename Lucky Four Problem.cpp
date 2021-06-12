#include<iostream>
using namespace std;
int main(){
	int n,a,r,count;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		while(a>0){
			r=a%10;
			if(r==4){
				count++;
			}
			a--;
		}
		
		cout<<count<<"\n";
		}
	
}

