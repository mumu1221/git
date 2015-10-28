/*************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2015年08月24日 星期一 10时23分45秒
 ************************************************************************/
#include<stdlib.h>
#include<stdio.h>
typedef struct node *ptr;
typedef ptr list;
typedef elementtype int;
ptr find(elementtype x,list l);
ptr creat(elementtype m);//creat a linklist include m element;
void insert(elementtype x,list l,ptr p);//insert an element after p in the list l;
void delete(elementtype x,list l);//delete the element x in the list l;
elementtype isempty(list l);//if the list is empty,return 1,else return 0; 
elementtype islast(ptr p);//if the ptr is last return 1,else return 0;
ptr findpre(elementtype x,list l);//return the element before the x element; 
void deletelist(list l);

struct node {
    elementtype ele;
    ptr next;
};
elementtype main(){
    ptr l=creat(5);
    ptr a=findpre(20,l);
    insert(50,l,a);
    delete( 50, l);
    long b=(long)a->next->ele;
    printf("%ld",b);
}
ptr find(elementtype x,list l){
    while(l->ele!=x && l!=NULL){
        l=l->next;
    }
    return l;
}



void insert(elementtype x,list l,ptr p){
    ptr tmp = (ptr)malloc(sizeof(struct node));
    tmp->ele=x;
    tmp->next=p->next;
    p->next=tmp;
}

ptr findpre(elementtype x,list l){
    while(l->next!=NULL && l->next->ele!=x){
        l=l->next;
    }
    return l;
}

void delete(elementtype x,list l){
    ptr p =findpre(x,l);
    ptr tmp =p->next;
    p->next=tmp->next;
    free(tmp);
}

ptr creat(elementtype m){
    ptr l=(ptr)malloc(sizeof(struct node));
    ptr p=(ptr)malloc(sizeof(struct node));
    l->next=p;
    elementtype i =0;
    while(i<m){
        scanf("%d",&p->ele);
        p->next=(ptr)malloc(sizeof(struct node));
        p=p->next;
        p->next=NULL;
        i++;
    }
    return l;

}
