#include<iostream>
using namespace std;
int main()
{
	int a,b,area,peri;
	cin>>a>>b;
	area=a*b;
	peri=2*(a+b);
	if(area>peri){
		cout<<"Area"<<"\n"<<area;
	}
	else if(peri>area){
		cout<<"Peri"<<"\n"<<peri;
	}
	else{
		cout<<"Eq"<<"\n<<area;
	     }
	return 0;
}
