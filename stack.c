#include<stdio.h>
struct node;
typedef struct node ptr;
typedef int elementtype;
typedef ptr stack;

int isemp(stack s);
stack creat();
void mkemp(stack s);
void push(elementtype ele,stack s);
elementtype top(stack s);
void pop(stack s);

struct node{
	elementtype ele;
	ptr next;
}

int main(){
	
}


int isemp(stack s){
	return s->next==NULL;
}

stack creat(){
	stack s;
	s = (stack)malloc(sizeof(struct node));
	if (s ==NULL){
		fataerror("out of space");
	}
	mkemp(s);
	return s;
}

void mkemp(stack s){
	if(s == NULL){
		error("must use creat()");
	}
	else while(!isemp(s)){	
		pop(s);
	}
}

void pop(stack s){
	if(isemp(s)){
		error("empty stack");
	}
	else
	{
		ptr tmp=s->next;
		s->next=s->next->next;
		free(tmp);
	}
}


void push(elementtype x,stack s){
    ptr tmp=(stack)malloc(sizeof(struct node));
    if(tmp==NULL){
        fataerror("out of space");
    }
    else{
        tmp->ele=x;
        tmp->next=s->next;
        s-next=tmp;
    }
}
elementtype top(s){
    if(!isemp){
        return s->next->ele;
    }
    error("empty stack");
    return 0;
}
