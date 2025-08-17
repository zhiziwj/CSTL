#include "stack.h"
void stack_init(struct stack* stack_){
	stack_->top=NULL;
}
int stack_empty(struct stack* stack_){
	return stack_->top==NULL;
}
void stack_push(struct stack* stack_,int data){
	struct stack_node* newnode=(struct stack_node*)malloc(sizeof(struct stack_node));
	newnode->value=data;
	newnode->next=stack_->top;
	stack_->top=newnode;
}
int stack_top(struct stack* stack_){
	return stack_->top->value;
}
void stack_pop(struct stack* stack_){
	struct stack_node* temp=stack_->top;
	stack_->top=temp->next;
	free(temp);
}
void stack_free(struct stack* stack_){
	while(!stack_empty(stack_)){
		stack_pop(stack_);
	}
}
