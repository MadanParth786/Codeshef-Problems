#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n--){
	  int a;
	  cin>>a;
	  int arr[a];
	  for(int i=0;i<a;i++){
	  	cin>>arr[i];
	  	sort(arr, arr+a);
	  	cout<<arr[i]<<"\n";
	  }
	  
	}
	
}
