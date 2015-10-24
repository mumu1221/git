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
ptr creat(int m);
void insert(int x,list l,ptr p);
void delete(int x,list l);
void isempty(list l);
void islast(ptr p);
ptr findpre(int x,list l);
void deletelist(list l);

struct node {
    int ele;
    ptr next;
};
int main(){
    ptr l=creat(5);
    ptr a=find(20,l);
    int b=a->ele;
    printf("%d",b);
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
    while(l->next!=NULL && l->next->x!=x){
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
