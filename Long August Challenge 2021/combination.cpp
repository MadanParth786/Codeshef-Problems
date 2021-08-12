#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n--){
	 int p,count;
	 cin>>p;
	
   int i,j,k;
   for(int i=1;i<p+1;i++){
   	for(int j=i;j<p+1;j+=i){
   		if(j%i==0){
		   
   		for(int k=i;k<p+1;k+=j){
   			 if(k%j==i){
   			 	count++;
   			 	
				}
		   }
	   }
   }
}
   cout<<count<<"\n";	
}
}
