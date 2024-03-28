#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size,f,r;
	int* arr;
};
int ismt(struct queue *q){
	if(q->r==q->f){return 1;}
	else{return 0;}
}
int isfl(struct queue *q){
	if(q->r==q->size-1){return 1;}
	else{return 0;}
}
void enqueue(struct queue *q,int val){
	if(isfl(q)){
		printf("full");
	}
else{
	q->r++;
	q->arr[q->r]=val;
	printf("enqueued %d \n",val);
}	
}
int dequeue(struct queue *q){
	int a=-1;
	if(ismt(q)){
		printf("mt");
	}
	else{
	q->f++;
	a=q->arr[q->f];	
	}
	printf("removed %d ",a);
	return a;
}
int main(){
	struct queue q;
	q.size=4;
	q.f=q.r=-1;
	q.arr=(int*)malloc(q.size*sizeof(int));
	enqueue(&q,1);
	enqueue(&q,2);
	//enqueue(&q,3);
	//enqueue(&q,4);
//	enqueue(&q,5);
	dequeue(&q);
	dequeue(&q);
	dequeue(&q);
	dequeue(&q);
	dequeue(&q);
	
	printf("%d",ismt(&q));
	return 0;
}
