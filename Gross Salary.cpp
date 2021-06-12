#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int s;
	double h,d;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		float gs=0;
		if(s<1500){
			h=s*0.10;
			d=s*0.90;
			gs+=s+h+d;
			
		}
		else{
			h=500;
			d=0.98*s;
			gs+=s+h+d;
		}
		cout<<setprecision(2)<<fixed<<gs<<"\n";
	}
	return 0;
}
