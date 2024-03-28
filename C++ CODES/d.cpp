#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *ll,*rl;
};
class dll{
	public:
		dll()
		{head=0;}
		node*head;
		struct node;
		void create(int x);
		void display();
};
void dll::create(int x){
	node *temp,*p;
	temp= new node;
	temp->rl=0;
	temp->ll=0;
	temp->data=x;
	p=head;
	if(p==0){
		head=temp;
	}
	else{
		while(p->rl==0){
			p=p->rl;
		}
		p->rl=temp;
		temp->ll=p;
	}
};
void dll::display(){
	node*p;
	p=head;
	while(p->rl!=0){
		cout<<p->data;
		p=p->rl;
	}
	cout<<p->data;
};
int main(){
	dll a;
	a.create(1);
	a.create(2);
	a.create(3);
	a.display();
}
