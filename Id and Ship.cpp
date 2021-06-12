#include <iostream>
using namespace std;

int main() {
	
	int n;
	char a;
	cin>>n;
	while(n--){
		cin>>a;
		if(a=='B' or a=='b'){
			cout<<"BattleShip"<<"\n";
		}
		else if(a=='C' or a=='c'){
			cout<<"Cruiser"<<"\n";
		}
		else if(a=='D' or a=='d'){
			cout<<"Destroyer"<<"\n";
		}
		else if(a=='F' or a=='f'){
			cout<<"Frigate"<<"\n";
		}
	}
	return 0;
}

