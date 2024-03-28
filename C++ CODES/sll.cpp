#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *link;
};
class sll
{
	node *head;
	public:
		sll()
		{head=0;}
		void create(int x);
		void display();
		void del();
		void rev();
		void del_pos(int pos);
		void create_pos(int x,int pos);
		//void merge(node a,node b);
};
void sll::create(int x)
{
	node *p,*temp;
	temp=new node;
	temp->link=NULL;
	temp->data=x;
	if(head==0)
	{
		head=temp;
	}
	else
	{
		p=head;
		while(p->link!=0)
		{
			p=p->link;
		}
		p->link=temp;
	}
};
void sll::display()
{
	node *p;
	if(head==0)
	{
		cout<<"not";
	}
	else
	{
		p=head;
		cout<<p->data<<"->";
		while(p->link!=0)
		{
			p=p->link;
			cout<<p->data<<"->";
		}
	}
};
void sll::del()
{
	node *p,*q;
	if(head==0)
	{
		cout<<"nothing ";
	}
	else
	{
		p=head;
		q=p->link;
		while(q->link!=0)
		{
			q=q->link;
			p=p->link;
		}
		p->link=0;
		delete(q);
	}
};
void sll::rev()
{
	node *f,*s,*t;
	f=0;
	s=head;
	t=0;
	while(s!=0)
	{
		t=s->link;
		s->link=f;
		f=s;
		s=t;
	}
	head=f;
};
void sll::del_pos(int pos)
{
	node *p,*q;
	p=head;
	q=p->link;
	int i=1;
	while(i<pos && q->link!=0)
	{
		q=q->link;
		p=p->link;
		i++;
	}
	p->link=q->link;
	delete(q);
	
}
void sll::create_pos(int x,int pos)
{
	node *temp,*p,*q;
	temp=new node;
	temp->link=0;
	temp->data=x;
    p=head;
	q=p->link;
	int i=1;
	while(i<pos && q->link!=0)
	{
		q=q->link;
		p=p->link;
		i++;
	}
	p->link=temp;
	temp->link=q;
};
/*void sll::merge(node a,node b){
	node *p,*q;
	p=a.head;
	q=b.head;
	while(p->link!=0)
	{
		p=p->link;
	}
	p->link=q;
}*/
int main()
{
	sll a;
	a.create(1);
	a.create(2);
	a.create(3);
	a.create(4);
	a.create(5);
	a.create(6);
	a.create(7);
	a.display();

	a.rev();
	cout<<"\n";
    cout<<"after reverse ";
	a.display();
	cout<<"\n";
	a.del();
	cout<<"after deletion";
	a.display();
	cout<<"\ndeleting a position";
	a.del_pos(3);
	cout<<"\n";
	a.display();
	cout<<"\n";
	cout<<"inserting a position";
	a.create_pos(8,4);
	a.display();
	return 0;
}
