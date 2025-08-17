#ifndef STACK_H
#define STACK_H
#include <stdlib.h>
struct stack_node{
	int value;
	struct stack_node* next;
};
struct stack{
	struct stack_node* top;
};
void stack_init(struct stack* stack_);
int stack_empty(struct stack* stack_);
void stack_push(struct stack* stack_,int data);
int stack_top(struct stack* stack_);
void stack_pop(struct stack* stack_);
void stack_free(struct stack* stack_);
#endif
