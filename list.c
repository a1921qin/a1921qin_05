#include "listg.h"
//创建链表
LinkList*CreateList()
{
	LinkList *head;
	head =(LinkList*)malloc(sizeof(LinkList));
	head->next=NULL;
	return head;
}
//求链表的元素个数
int Size(LinkList *l)
{
	node *p=l->next;
	int k = 0;
	while (p){
		k++;
		p = p->next;
	}
	return k;
}
//在链表l的第k个位置插入元素x
void Isert(LinkList *l,int k,dataType x)
{
	if (k<1) exit(1);
	node *p =l;
	int i =0;
	while (p && i< k-1){
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	node *s =(node*)malloc(sizeof(node));
	s->data =x;
	s->next =p->next;
	p->next =s;
}
//删除k链表l的第K个元素
void Delete(LinkList *l,int k)
{
	if (k<1) exit(1);
	node *p=l;
		int i =0;
	while (p->next && i<k-1){
		p = p->next;
		i++;
	}
	if (p->next==NULL) exit(1);
	node *q =p->next;
	p->next =q->next;
	free(q);
}
//判断链表是否为空 	
int Empty(LinkList *l) 
{
	 return l -> next ==NULL;
}
//求链表l的第K个元素的值
dataType GetData(LinkList *l,int k)
{
	if (k<1) exit (1);
	node *p =l;
	int i=0;
	while (p && i<k){
		p =p->next;
		i++;
	}
	if (!p) exit (1);
	return p->data;
}
//在链表l中查找值为X的元素
node* Find(LinkList *l,dataType x){
	node *p =l->next;
	while (p && p->data !=x)
		p =p->next;
	return p;
	}
//输出链表
void Printlist(LinkList *l)
{
	node *p = l->next ;
	while (p){
		printf ("%d",p->data);
		p = p->next;
	}
	printf("\n");
}
//清空链表
void ClearList(LinkList *l){
	node *p ,*q;
	p=l->next;
	while (p){
		q=p;
		p=p->next;
		free(q);
	}
	l->next =NULL;
}

void CreatList(){

     node *p,*q,*r;
     p=q=(node*)malloc(sizeof(node));
     p->no=1;
     for(int i=2;i<=n;i++){
	     r=(node*)malloc(sizeof(node));
	     r->no=i;
             q->next=r;
	     q=r;
     }
     q->next=p;
     q=p;
     return;
}
void Delect()
{node *p,*q;
	int k=0;
	while (q->next!=q){
		k++;
		if(k==m){
			p->next =q->next;
			free(q);
			q=p->next;
			k=0;
		}else{
			p=q;
			q=q->next;
		}
	}
void Print(){
	node*q;
	printf("最后一个获胜者编号是:%d\n",q->no+1);
}
}
