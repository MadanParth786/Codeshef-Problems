#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,min,max,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b){
		    min=a;
		}
		else{
		    min=b;
		}
		max=a+b;
		cout<<min<<" "<<max<<"\n";
	}
	return 0;
}
