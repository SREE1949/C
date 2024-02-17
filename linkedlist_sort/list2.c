#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

llist *initialize()
{
 llist *l;
 l=(llist *)malloc(sizeof(llist));
 if(l==NULL) return NULL;
 l->head=l->tail=NULL;
 l->lcount=0;
 return l;
}

node *get_node(int data)
{
 node *n;
 n=(node *)malloc(sizeof(node));
 if(n==NULL) return NULL;
 n->data=data;
 n->ptr=NULL;
 return n;
}

int insert_beg(llist *l,int data)
{
 node *n;
 n=get_node(data);
 if(n==NULL) return 0;
 if(l->lcount==0)
 {
  l->head=l->tail=n;
  l->lcount++;
 }
 else{
  n->ptr=l->head;
  l->head=n;
  l->lcount++;
 }
 return 1;
}

void display(llist *a)
{
 node *n;
 n=a->head;
 if(a->lcount==0) printf("No data");
 for(int i=0;i<a->lcount;i++)
 {
  printf(" %d",n->data);
  n=n->ptr;
 }
 printf("\n");
 printf("head :%d \n",a->head->data);
 printf("tail :%d \n",a->tail->data);

}

int insert_any(int data,int n,llist *l)
{
 node *nd,*pt;
 int num=1;
 nd=get_node(data);
 pt=l->head;
 if(n==1)
 {
  return insert_beg(l,data);
 }
 else if(n>l->lcount+1)
 {
  return 0;
 }

 else
 {

  while(1)
  {
   if(num==n-1) break;
   num++;
   pt=pt->ptr;
  }
  nd->ptr=pt->ptr;
  pt->ptr=nd;
  l->lcount++;
  if(n==l->lcount+1)
  {
   l->tail=pt;
  }
  return 1;
 }
}

int sort_list(llist *a)
{
 int temp;
 node *n;
 if(a==NULL) return 0;
 for(int i=0;i<a->lcount-1;i++)
 {
  n=a->head;
  for(int j=0;j<a->lcount-1;j++)
  {
   if(n->data > n->ptr->data)
   {
    temp=n->data;
    n->data=n->ptr->data;
    n->ptr->data=temp;
   }
   n=n->ptr;
  }
 }
 return 1;
}

