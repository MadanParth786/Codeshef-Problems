#include <cstring>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
    while(t--)
  {
  int n,k;
  cin>>n>>k;
  int arr[33];
  for(int i=0;i<33;i++){
  	arr[i]=0;
  }
  int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
	 }
  
  for(int i=0;i<n;i++){
      int x=a[i];
      int j=32;
      while(x>0){
      arr[j]=arr[j]+x%2;
      j--;
      x=x/2;
      }
  }
    int count=0;

    for( int j=0;j<33;j++){
      if(arr[j]%k==0){
         count=count+arr[j]/k;
    }
      else{
        count=count+1+arr[j]/k;
      }
}
    cout<<count<<"\n";
  }
}
