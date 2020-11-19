#ifndef listg_h
#define listg_h
#include <stdlib.h>
#include<stdio.h>
#include<malloc.h>
#define n 11
#define m 3

typedef int dataType;
typedef struct node{
	dataType data;
	struct node *next;
	int no;
}LinkList,node;
LinkList* CreateList();
int Size(LinkList *l);
void Insert(LinkList *l,int k,dataType x);
void Delete(LinkList *l,int k);
int Empty(LinkList *l);
dataType GetData(LinkList *l,int k);
node *Find(LinkList *l,dataType x);
void Printlist(LinkList *l);
void CreatList();
void Delect();
void Print();


#endif
