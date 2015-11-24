/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Nov 2015 04:24:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct node *ptr;
typedef ptr bp;
typedef ptr fp;
typedef int elementtype;
ptr findend(ptr head);
void exchange(ptr fp,ptr bp);

struct node{
    elementtype ele;
    ptr prior;
    ptr next;
}


ptr findend(ptr head){
    ptr tmp=head;
    while(tmp->next!=head){
        tmp=tmp->next;
    }
    return tmp;
}

void exchange(ptr fp,ptr bp){
    elementtype tmp = bp->ele;
    bp->ele=fp->ele;
    fp->ele=tmp;
}

void inverse(ptr fp,ptr bp){
    while((fp->next!=bp)&&(fp->next!=bp->prior)){
       exchange(fp,bp);
        fp=fp->next;
        bp=bp->next;
    }

        fp=fp->next;
        bp=bp->next;
    exchange(fp,bp);

}

 




