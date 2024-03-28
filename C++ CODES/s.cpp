#include<iostream>
using namespace std;
class stack{
	arr stack;
	int top;
	public:
		stack[int max];
		top=-1;
		int isempty();
		int isfull();
		void pushin(int ele);
	
};
int stack::isempty(){
	if(top=-1){
		return 1;
	}
	else{
		return 0;
	}
};
int stack::isfull(){
	if(top=len(stack)){
		return 1;
	}
	else{
		return 0;
	}
};
void stack::pushin(int ele){
	if(isfull()){
		cout<<"stack full";
	}
	else{
		top=top+1;
		stack[top]=ele;
	}
};
int main(){
	stack s[5];
	s.pushin(1);
	s.pushin(2);
	cout<<s;
	return 0;
};
