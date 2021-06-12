#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[3];
	while(n--){
	    for(int i=0;i<3;i++)
	    cin>>a[i];
	    sort(a, a+3);
	   cout<<a[1]<<endl;    
	}
	
	return 0;
}
