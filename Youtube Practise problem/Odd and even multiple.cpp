#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%3!=0){
	    cout<<-1<<"\n";
	}
	else{
	if((n/3)%2!=0){
	    cout<<1<<"\n";
	}
	else{
	    cout<<0<<"\n";
	}
}
	return 0;
}

