/*#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *a = (struct node*)malloc(sizeof(struct node));
    struct node *b = (struct node*)malloc(sizeof(struct node));
    struct node *c = (struct node*)malloc(sizeof(struct node));
    a->data=10; a->next=b;
    b->data=20; b->next=c;
    c->data=30; c->next=NULL;
    struct node *p=a;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
int main() {
	struct node *a=(struct node *)malloc(sizeof(struct node));
	struct node *b=(struct node *)malloc(sizeof(struct node));
	struct node *c=(struct node *)malloc(sizeof(struct node));
	a->data=10; a->next=b;
	b->data=20; b->next=c;
	c->data=30; c->next=NULL;
	struct node *p=a;
	while(p!=NULL) {
	printf("%d ",p->data);
	p=p->next;
	}
	return 0;
}
