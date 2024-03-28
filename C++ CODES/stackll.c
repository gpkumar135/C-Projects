#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* nxt;	
};
struct node* top;
void llt(struct node *ptr){
	while(ptr!=NULL){
		printf("element:%d. ",ptr->data);
		ptr=ptr->nxt;
	}
}
int ismt(struct node* top){
	if(top==NULL){
		return 1;
	}
	else{return 0;}
}
int isfl(struct node* top){
struct node* p=(struct node*)malloc(sizeof(struct node));
if(p==NULL){return 1;}
else{return 0;}
}
struct node* push(struct node* top,int x){
	if(isfl(top)){printf("stkfl");}
else{
	struct node* n=(struct node*)malloc(sizeof(struct node));
	n->data=x;
	n->nxt=top;
	top=n;
	return top;
}	
}
int pop(struct node* tp){
if(ismt(tp)){
printf("mtstk");	
}
else{
	struct node* n=tp;
	top=(tp)->nxt;
	int x = n->data;
	free(n);
	return x;
}
}
int peek(int pos){
	struct node* ptr=top;
	int i;
	for(i=0;(i<pos-1&&ptr!=NULL);i++){
		ptr=ptr->nxt;
	}
	if(ptr!=NULL){
		return ptr->data;
	}
	else{
		return -1;
	}
}

int main(){
	top=push(top,1);
top=push(top,2);
	top=push(top,3);
   	top=push(top,99);
	llt(top);
//	for(int i=1;i<=4;i++){
//		printf("value at pos %d is:%d\n ",i,peek(i));
//	}
//	 pop(top);
//	pop(top);
//pop(top);
//	pop(top);
//	pop(top);
//	pop(top);    
    //printf("chck %d ",ismt(top));
	return 0;
}
