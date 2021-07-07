#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void){
	int n,d,x,y,z;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>d>>x>>y>>z;
		x=x*7;
		int r=(y*d)+(z*(7-d));
        cout<<max(x,r)<<"\n";		
	}
}
