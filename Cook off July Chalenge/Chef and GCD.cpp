#include<iostream>
//#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int x,y;
	int solution=0;
	while(n--)
	{  
	    cin>>x>>y;
		if(x%2==0 and y%2==0){
			solution=0;
			
		}
		else if (gcd (x+1,y)>1) or (gcd(x,y+1)>1){
			solution=1;
		}
		else{
			solution=2;
		}
		cout<<solution<<"\n";
	}
}
