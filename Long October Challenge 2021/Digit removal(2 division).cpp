#include<iostream>
using namespace std;
int main(void)
{
	int n,t;
	cin>>n;
	cin>>t;
	string str=to string(n);
	int len=str.length();
	
	if(t==0){
		int x=len;
		for(int i=0;i<len;i++){
			if(str[i]=='0'){
				str[i]='1';
				x=i;
				break;
			}
		}
		for(int j=x+1;j<len;j++){
			str[j]='1';
		}
	}
	else if(d==9){
		if(str[0]=='9'){
			for(int i=0;i<len;i++){
				str[i]='0';
			}
			str="1"+str;
		}
		else{
			int w=len;
			for(int i=0;i<len;i++){
			if(str[i]=='9'){
			  for(int k=i-1l;k>=0;k--){
			  	if(str[k]<='7'){
			  		str[k]++;
			  		w=k;
			  		goto cvv;
				  }
			  }
			}
			// Not complete........//
		}
	}
}
