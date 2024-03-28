#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node *right;
};
struct node* create(int data){
	struct node* n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=n->right=NULL;
	return n;
}
void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("   %d ",root->data);
	}
}
void preorder(struct node *root){
	if(root!=NULL){
		printf("   f %d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
  struct node* search(struct node *root,int key){
	struct node* p=root;
	if(p==NULL){return NULL;}
	if(key==p->data){return p;}
	else if(key<p->data){
		return search(p->left,key);
		}
		else{
			return search(p->right,key);
		}
}
 struct node* isearch(struct node *root,int key){
	while(root!=NULL){
		if(key==root->data){
			return root;
		}
		else if(key<root->data){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
}
void insert(struct node *root,int key){
	
	struct node* prev=NULL;
	while(root!=NULL){
		prev=root;
		if(key==root->data){
			printf("cannot insert");
			return;
		}
		else if(key<root->data){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
	struct node* new=create(key);
	if(key<prev->data){
		prev->left=new;
	}
	else{
		prev->right=new;
	}
}
struct node *inopre(struct node* root){
	root=root->left;
	while(root->right!=NULL){
		root=root->right;
	}
	return root;
}
struct node *dlt(struct node *root,int value){
	struct
}
int main(){
	struct node *p=create(7);
	struct node *p1=create(5);
	struct node *p2=create(9);
	struct node *p3=create(3);
	struct node *p4=create(4);
	struct node *p5=create(8);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p3->right=p4;
     p2->left=p5;
	insert(p,16);
	insert(p,6);
	inorder(p);
//	postorder(p);
//	preorder(p);
  struct node* n =isearch(p,4);
   printf("\n%d ",n->data); 
	return 0;
}

