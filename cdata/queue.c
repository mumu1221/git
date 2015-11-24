/*************************************************************************
	> File Name: queue.c
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Nov 2015 03:13:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct queue;
typedef struct queue *qptr;

int isfull(qptr q);
int isemp(qptr q);
qptr creat(int maxele);
void disposequeue(qptr q);
void mkemp(qptr q);
void enqueue(elementtype x,qptr q);
elementtype front(qptr q);
void dequeue(qptr q);
elementtype frontanddequeue(qptr q);

struct queue{
    int capacity;
    int front;
    int rear;
    int size;
    elementtype *array;
}

int isemp(qptr q){
    return q->size == 0;
}

void mkemp(qptr q){
    q->size = 0;
    q->front=1;
    q->rear=0;
}    

































