// stack implementation using c++
#include<iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val){
	if(top>=n-1){
		cout<<"Stack overflow"<<"\n";
		}
		else{
			top++;
			stack[top]=val;
		}
		
}
void pop(){
	if(top<=-1){
		cout<<"Stack Underflow"<<"\n";
	}
	else{
		cout<<"The popped element is: "<< stack[top] <<endl;
		top--;
	}
	
}
void display(){
	if(top>=0){
		cout<<"Stack Elements are:";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
			cout<<endl;
		}
	}
	else{
		cout<<"Sorry!!! Stack is Empty";
	}
}

int main()
{
	cout<<"***Welcome To Stack Implementation***"<<"\n";
	cout<<"Menu are: "<<"\n";  
	cout<<"1> Push in the Stack"<<"\n";
	cout<<"2> Pop from the Stack"<<"\n";
	cout<<"3> Display the stack"<<"\n";
	cout<<"4> Exit"<<"\n";
	int ch,val;
    do{
		cout<<"Enter your Choice: ";
	    cin>>ch;
	    switch(ch){
	    	case 1:{
	    		cout<<"Enter Value to be Pushed: "<<"\n";
	    		cin>>val;
	    		push(val);
				break;
			}
			case 2:{
				pop();
				break;
			}
		    case 3:{
		    	display();
				break;
			}
			case 4:{
				cout<<"Exit"<<endl;
				break;
			}
			default:{
				cout<<"***Invalid Input By user***"<<"\n";
				break;
			}
		}
	
	}while(ch!=4);
	return 0;
}
