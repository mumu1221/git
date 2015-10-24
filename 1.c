/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2015年08月24日 星期一 10时23分45秒
 ************************************************************************/
#include<stdlib.h>
#include<stdio.h>
typedef struct node *ptr;
typedef ptr list;
ptr find(int x,list l);
ptr creat(int m);//creat a linklist include m element;
void insert(int x,list l,ptr p);//insert an element after p in the list l;
void delete(int x,list l);//delete the element x in the list l;
int isempty(list l);//if the list is empty,return 1,else return 0; 
int islast(ptr p);//if the ptr is last return 1,else return 0;
ptr findpre(int x,list l);//return the element before the x element; 
void deletelist(list l);

struct node {
    int ele;
    ptr next;
};
int main(){
    ptr l=creat(5);
    ptr a=find(20,l);
    long b=(long)a->next;
    printf("%ld",b);
}
ptr find(int x,list l){
    while(l->ele!=x && l!=NULL){
        l=l->next;
    }
    return l;
}



void insert(int x,list l,ptr p){
    ptr tmp = (ptr)malloc(sizeof(struct node));
    tmp->ele=x;
    tmp->next=p->next;
    p->next=tmp;
}

ptr findpre(int x,list l){
    while(l->next!=NULL && l->next->ele!=x){
        l=l->next;
    }
}

void delete(int x,list l){
    ptr p =findpre(x,l);
    ptr tmp =p->next;
    p->next=tmp->next;
    free(tmp);
}

ptr creat(int m){
    ptr l=(ptr)malloc(sizeof(struct node));
    ptr p=(ptr)malloc(sizeof(struct node));
    l->next=p;
    int i =0;
    while(i<m){
        scanf("%d",&p->ele);
        p->next=(ptr)malloc(sizeof(struct node));
        p=p->next;
        p->next=NULL;
        i++;
    }
    return l;

}
