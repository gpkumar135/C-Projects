#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size,top;
	char *arr;
};
int ismt(struct stack* ptr){
	if(ptr->top==-1){return 1;}
 else{return 0;}
}
int isfl(struct stack* ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{return 0;}
}
void push(struct stack* ptr,char val){
	if(isfl(ptr)){
		printf("stckfl");
	}
	else{
	ptr->top++;
	ptr->arr[ptr->top]=val;
	}
}
char pop(struct stack* ptr){
	if(ismt(ptr)){
		printf("mtstk");
	}
	else{
		char val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int match(char a,char b){
	if(a=='{'&&b=='}'){return 1;}
	if(a=='('&&b==')'){return 1;}
	if(a=='['&&b==']'){return 1;}
	return 0;
}
int parmat(char* exp){
	struct stack* sp;
	sp->size=100;
	sp->top=-1;
	sp->arr=(char*)malloc(sp->size*sizeof(char));
	char ppd;
	int i;
	for(i=0;exp[i]!='\0';i++){
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
			push(sp,exp[i]);
		}
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
			if(ismt(sp)){return 0;}
		ppd=pop(sp);
		if(!match(ppd,exp[i])){return 0;}	
		}
	}
	if(ismt(sp)){return 1;}
	else{return 0;}
}
int main(){
	char* ex="({[]})";
	if(parmat(ex)){
		printf("  balanced");
	}
	else{
		printf("unbalanced");
	}
	return 0;
}
