#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n--){
		string a;
		cin>>a;
		string ans= "Success";
		if(a.size()<=3){
			ans="Error";
		}
		else if(a[0]!='<' || a[1]!='/'){
			ans="Error";
		}
		else if(a[a.size()-1]!='>' ){
			ans ="Error";
		}
		else{
			for(int i=2;i<a.size()-1;i++){
				if(!((a[i]>='a'&& a[i]<='z') || (a[i]>='0'&& a[i]<='9'))){
					ans ="Error";
				}
			}
		}
		cout<<ans<<"\n";
		
	}
