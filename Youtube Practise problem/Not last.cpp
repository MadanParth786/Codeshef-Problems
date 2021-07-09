#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int r=n%100;
	int z=r/10;
	if(z==7){
	    cout<<1<<"\n";
	    
	}
	else{
	    cout<<0<<"\n";
	}
	return 0;
}

