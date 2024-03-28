#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *ll,*rl;
};
class cll
{
	node *head;
	public:
		cll()
		{head=0;}
		void create(int x);
		void display();
};
void cll::create(int x)
{
	node *temp,*p,*q;
	temp=new node;
	temp->ll=NULL;
	temp->rl=NULL;
	temp->data=x;
	if(head=0)
	{
		head=temp;
	}
	else
	{
		p=head;
		q=head;
		if(p->rl==0)
		{
			p->rl=temp;
			temp->ll=p;
			temp->rl=q;
		}
		else
		{
			while(p->rl!=q)
			{
				p=p->rl;
			}
			p->rl=temp;
			temp->ll=p;
			temp->rl=q;
		}
	}
};
void cll::display()
{
	node *p,*q;
	p=head;
	q=head;
	if(head=0)
	{
		cout<<"no";
	}
	else
	{
		cout<<p->data;
		while(p->rl!=q)
		{
			p=p->rl;
			cout<<p->data;
		}
	}
};
int main()
{
	cll a;
	a.create(1);
	a.create(2);
	a.create(3);
	a.display();
	return 0;
}
