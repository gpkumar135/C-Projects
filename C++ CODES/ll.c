#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void countno(struct node *head){
	int count=0;
	struct node *ptr=head;
	while(ptr!=NULL){
	count++;
	ptr=ptr->link;
	}
	printf("%d ",count);
}
void printl(struct node *head){
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
}
void add(struct node *head,int data){
	struct node *temp,*ptr;
	ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=temp;
}
	struct node* addb(struct node* head,int d){
	struct node *ptr=malloc(sizeof(struct node));
	ptr->data=d;
	ptr->link=NULL;
	ptr->link=head;
	head=ptr;
	return head;

}
void adde(struct node *head,int data){
	struct node *ptr,*temp;
   temp=malloc(sizeof(struct node));
	ptr=head;
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=temp;
}
void addp(struct node *head,int data,int pos){
	struct node *ptr,*ptr2;
	ptr=head;
	ptr2=malloc(sizeof(struct node));
	ptr2->data=data;
	ptr2->link=NULL;
	pos--;
	while(pos!=1){
		ptr=ptr->link;
		pos--;
	}
	ptr2->link=ptr->link;
	ptr->link=ptr2;
	}
 struct node* delf(struct node *head){
 	struct node *temp=head;
 	head=head->link;
 	free(temp);
 	return head;
 }
 struct node* dell(struct node *head){
 	struct node *temp,*temp2;
 	temp=head;
 	temp2=head;
 	while(temp->link!=NULL){
 		temp2=temp;
 		temp=temp->link;
	 }
	 temp2->link=NULL;
	 free(temp);
	 temp=NULL;
	 return head;
	 }
	 void delp(struct node **head,int pos){
	 	struct node *curr,*prev;
	 	curr=*head;
	 	prev=*head;
	 	while(pos!=1){
	 		prev=curr;
	 		curr=curr->link;
	 		pos--;
			 }
			 prev->link=curr->link;
			 free(curr);
			 curr=NULL;
	 }	
int main(){
 struct node *curr1,*curr2,*head=(struct node *)malloc(sizeof(struct node));
 head->data=45;
 head->link=NULL;
 curr1=malloc(sizeof(struct node));
 curr1->data=98;
 curr1->link=NULL;
 head->link=curr1;
 curr2=malloc(sizeof(struct node));
 curr2->data=99;
 curr2->link=NULL;
 head->link->link=curr2;
 add(head,68);
 adde(head,18);
head=addb(head,91);
addp(head,77,4);
//head=dell(head);
//delp(&head,3); 
 countno(head);
 printl(head);
 return 0;
}
