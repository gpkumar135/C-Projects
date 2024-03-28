#include<iostream>
using namespace std;
class stack
{
	int s[10];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		int isempty();
		int isfull();
		void pushin(int ele);
		void display();
		void pop();
};
int stack::isfull()
{
	if(top==9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
};
int stack::isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
};
void stack::pushin(int ele)
{
	if(isfull())
	{
		cout<<"stack full";
	}
	else
	{
		top=top+1;
		s[top]=ele;
	}
};
void stack::display()
{
	int i;
	for(i=0;i<=9;i++)
	{
		cout<<s[i]<<" ";
	}
};
void stack::pop()
{
	if(isempty())
	{
		cout<<"nothing to delete";
	}
	else
	{
		s.pop;
	}
};
int main()
{
	stack a;
	a.pushin(1);
	a.pushin(2);
	a.pushin(3);
	a.pushin(4);
	a.pushin(5);
	a.pushin(6);
	a.pushin(7);
	a.pushin(8);
	a.pushin(9);
	a.pushin(11);
	a.pop();
	cout<<"\n";
	a.display();
	return 0;
	
}
