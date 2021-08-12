#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int N,P,K;
	while(n--){
		cin>>N>>P>>K;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				int r=j%K;
				if(r==P){
					cout<<i<<"\n";
				}
			}
		}
	}
}
