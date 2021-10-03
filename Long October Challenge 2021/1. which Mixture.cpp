#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		if(a>0 and b>0){
			cout<<"Solution"<<"\n";
		}
		else if(a>0 and b==0){
			cout<<"Solid"<<"\n";
		}
		else {
			cout<<"liquid"<<"\n";
		}
	}
}
