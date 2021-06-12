#include<iostream>
using namespace std;
int main() {
	int t, n;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n;
	    int fact=1;
	    while(n>0){
	    fact = fact * n;
	    n--;
	    }
	    cout<<fact<<endl;
	}
	return 0;
}
