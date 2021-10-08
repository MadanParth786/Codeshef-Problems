#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int N=n,r,ans=0,c=0;
		while(N>0)
		{
			r=N%10;
			N=N/10;
			c++;
			if(r==d)
			{
				N=N*pow(10,c)+(r+1)*pow(10,c-1);
				ans=N-n;
				c=0;
			}
		}
		cout<<ans<<"\n";
	}
}
