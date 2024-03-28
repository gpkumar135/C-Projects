#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *ll,*rl;
};

class dll{
	node *head;
	public:
		dll()
		{head=0;}
		void create(int x);
		void display();	
		void insert(int i,int x);	
};

void dll::create(int x){
    node *temp,*p;
	temp=new node;
	temp->rl=NULL;
	temp->ll=NULL;
	temp->data=x;
	p=head;
	if(p==0)
	{
		head=temp;
	}	
	else{
		while(p->rl!=0)
		{
			p=p->rl;
		}
		p->rl=temp;
		temp->ll=p;
	}
};
void dll::display(){
	node *p;
	p=head;
	if(p==0){
		cout<<"no ";
	}
	else{
		cout<<p->data<<"->";
		while(p->rl!=0){
			p=p->rl;
			cout<<p->data<<"->";
		}
	}
	
};
void dll::insert(int i,int x)
{
	node *p,*temp,*q;
	int k;
	k=1;
	temp=new node;
	temp->ll=NULL;
	temp->rl=NULL;
	temp->data=x;
	while((p->rl!=0)&&(k<i))
	{
		p=p->rl;
	}
	q=p->rl;
	p->rl=temp;
	temp->ll=p;
	temp->rl=q;
	k++;
};
int main(){
	dll a;
    a.create(1);
	a.create(3);
	a.create(4);
	a.create(6);
	a.create(7);
	a.insert(3,8);
	a.display();
	return 0;
}
