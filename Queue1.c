#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
	int *ar;
	int f,r;
	int cap;
	int size;
}que;
void Enqueue(que *q,int element)
{
	if(q->r==q->cap-1 )
	printf("Overflow\n");
	else if( q->r==-1 && q->f==-1)
	{
		q->r++;
		q->f++;
		q->ar[q->r]=element;
		printf("%d ",q->ar[q->r]);                   
	}
	else
	{
		q->r++;                                         
		q->ar[q->r]=element;
			printf("%d ",q->ar[q->r]);
	}
}
int Dequeue(que *q)
{
	int temp;
	if(q->f==-1 && q->r==-1)
	 printf("\nUnderflow\n");
	 if(q->f==q->r)
	{
		temp=q->ar[q->f];
		q->f=-1;
		q->r=-1;
		return temp;
	 } 
	 else
	{
		temp=q->ar[q->f];
		q->f=(f+1)%q->cap;
		return temp;
	} 

}
que* creat_queue(int cap)
{
	que* q=(que*)malloc(sizeof(que));
	if(!q) return NULL;
	q->f=-1;
	q->r=-1;
	q->cap=cap;
	q->size=0;
	q->ar=(int*)malloc(q->cap*sizeof(int));
	if(!q->ar) return NULL;
	return q;
}
int main()
{
	que *q=creat_queue(10);
	Enqueue(q,10);
	Enqueue(q,20);
	Enqueue(q,30);
	printf("\nDe %d ",Dequeue(q));
	printf("\nDe %d ",Dequeue(q));
	printf("\nDe %d ",Dequeue(q));
	printf("\nDe %d ",Dequeue(q));
}