#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size,r,f;
	int* arr;
};
int ismt(struct queue *q){
	if(q->f==q->r){return 1;}
	else{return 0;}
}
int isfl(struct queue *q){
	if((q->r+1)%q->size==q->f){return 1;}
	else{return 0;}
}
void enqueue(struct queue *q,int val){
	if(isfl(q)){
		printf("full");}
		else{
			q->r=((q->r+1)%q->size);
			q->arr[q->r]=val;
			printf("enqued %d \n",val);
		}
	} 
int dequeue(struct queue *q){
	int a=-1;
	if(ismt(q)){
		printf("mt");
	}
	else{
	q->f=((q->f+1)%q->size);
	a=q->arr[q->f];
	printf("dequed: %d\n",a);
	return a;	
	}
}	

int main(){
struct queue q;
	q.size=5;
	q.f=q.r=0;
	q.arr=(int*)malloc(q.size*sizeof(int));
//	enqueue(&q,1);
//	enqueue(&q,2);
//	enqueue(&q,3);
//	enqueue(&q,4);
	//enqueue(&q,5);
//	dequeue(&q);
//	enqueue(&q,1);
printf("%d %d \n",ismt(&q),isfl(&q));
}
