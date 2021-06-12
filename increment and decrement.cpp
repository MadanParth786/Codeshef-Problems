#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{ 
	    cin>>a;
		if(a%4==0){
			a++;
		}
		else{
			a--;
		}
		cout<<a<<"\n";
	}
	return 0; 
}
