#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	 int n,x;
	 int l;
	 cin>>n;
	 while(n--){
	 	cin>>l;
	 	int e=0,o=0;
	 	for(int i=0;i<l;i++){
	 		cin>>x;
	 		if(x%2==0){
	 			e+=1;
			 }
			 else{
			 	o+=1;
			 }
	 		
		 }
		 cout<<min(e,(l+1)/2)+min(o,l/2)<<"\n";
	 }
}
