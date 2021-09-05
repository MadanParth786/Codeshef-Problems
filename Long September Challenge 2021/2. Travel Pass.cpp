#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int l,a,b;
	string s;
	while(n--){
		cin>>l>>a>>b;
		cin>>s;
		int time=0;
		for(int i=0;i<l;i++){
			if(s[i]=='0'){
				time+=a;
			}
			else{
				time+=b;
			}
		}
		cout<<time<<"\n";
	}
	
}
