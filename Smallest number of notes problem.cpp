#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
		while(a>0){
		
		if(a>=100){
			a=a-100;
			c1++;
		}
		else if(a>=50){
			a=a-50;
			c2++;
		}
		else if(a>=10){
			a=a-10;
			c3++;
		}
		else if(a>=5){
			a=a-5;
			c4++;
		}
		else if(a>=2){
			a=a-2;
			c5++;
		}
		else if(a>=1){
			a=a-1;
			c6++;
		}
    }    
		cout<<c1+c2+c3+c4+c5+c6<<"\n";
  }
	return 0;
}

