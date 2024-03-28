#include<stdio.h>
#include<stdlib.h>
struct stack{
int *arr,size,top;	
};
int ismt(struct stack* ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
	
}
int isfl(struct stack* ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(struct stack* ptr,int val){
	if(isfl(ptr)){
		printf("full");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
int pop(struct stack* ptr){
	if(ismt(ptr)){
printf("mt"); return -1; 		 
	}else{ int val=ptr->arr[ptr->top];
	ptr->top--;
	return val;
		
	}
}
 int peek(struct stack* sp,int i){
int arndx=sp->top-i+1;
if(arndx<0){
printf("wrng");
return -1;	
}
else{
return sp->arr[arndx];	
}	
}
int main(){
	struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=5;
	sp->top=-1;
	sp->arr=(int*)malloc(sizeof(struct stack));
//	printf("before %d ",isfl(sp));
//	printf("before %d\n ",ismt(sp));
	push(sp,1);
	push(sp,2);
	push(sp,3);
	push(sp,4);
	push(sp,5);
	printf("%d ",pop(sp));
	//printf("%d ",pop(sp));
	//printf("%d ",pop(sp));
	//printf("%d ",pop(sp));
	//printf("%d ",pop(sp));
	//printf("after %d after %d\n",isfl(sp),ismt(sp));
//printf("%d ",peek(sp,1));
//printf("%d ",peek(sp,2));
//printf("%d ",peek(sp,3));
//printf("%d ",peek(sp,4));
//printf("%d ",peek(sp,5));
	return 0;
}
