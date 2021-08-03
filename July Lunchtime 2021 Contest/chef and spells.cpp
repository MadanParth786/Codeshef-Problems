#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,a,b,c,A,B,C;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		 A=a+b;
		 B=b+c;
		 C=c+a;
		cout<<max(max(A,B),max(B,C))<<"\n";
	}
	return 0;
}
