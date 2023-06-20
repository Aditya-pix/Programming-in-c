#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int *arr;
	int top;
	int size;
} stack;
int isEmpty(stack *st)
{
	if(st->top==-1)
	return 1;
	return 0;
}
int isFull(stack *st)
{
	if(st->top==st->size-1)

	return 1;
	return 0;
}
int size_stk(stack *st)
{
	return (st->top+1);
}
int peek(stack *st)
{
	if(st->top==-1)
	{
		printf("empty stack");
		return INT_MIN;
	}
	return st->arr[st->top];
}
int pop(stack *st)
{
	if(st->top==-1)
	{
		printf("Stack underflow");
		return INT_MIN;	
	}
	int tem=st->arr[st->top];
	st->top--;
	return tem;
}
void push(stack *st,int x)
{
	if(st->top==st->size-1)
	{
	printf("Stack overflow");
	return;
	}
	st->top++;
	st->arr[st->top]=x;
}
stack *creat_stk(int cap)		//creation of stack
{
	stack* s=(stack*)malloc(sizeof(stack));
	if(!s)		// checking memory allocation
	return NULL;
	s->top=-1;
	s->size=cap;
	s->arr=(int*)malloc(s->size*sizeof(int));
	if(!s)
	return NULL;
	return s;
	
}
int main()
{
	stack *st=creat_stk(10);
	push(st,10);
	push(st,20);
	push(st,30);
	//printf("%d",peek(st));
	pop(st);
//	printf("%d",peek(st));
	pop(st);
	pop(st);
	printf("%s",isFull(st)?'YES':'NO');
}