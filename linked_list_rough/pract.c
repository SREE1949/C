#include <stdio.h>
#include <stdlib.h>

#include "pract.h"
llist *initialize()
{
 llist *my_list;
 my_list=(llist *) malloc(sizeof(llist));
 if(my_list==NULL) return NULL;
 my_list->head=my_list->tail=NULL;
 my_list->lcount=0;
 return my_list;
}

node *getnode(int data)
{
 node *mnode;
 mnode=(node *) malloc(sizeof(node));
 if(mnode==NULL) return NULL;
 mnode->data=data;
 mnode->ptr=NULL;
 return mnode;
}

int insert_beg(llist *a,int data)
{
 node *n;
 n=getnode(data);
 if(n==NULL) return 0;
 if(a->lcount==0)
 {
  a->head=a->tail=n;
  a->lcount++;
 }
 else{
  n->ptr=a->head;
  a->head=n;
  a->lcount++;
 }
 return 1;
}

int insert_end(llist *a,int data)
{
 node *n;
 n=getnode(data);
 if(n==NULL) return 0;
 if(a->lcount==0)
 {
  a->head=a->tail=n;
  a->lcount++;
 }
 else
 {
  a->tail->ptr=n;
  a->tail=n;
  a->lcount++;
 }
 return 1;
}

int delete_node(llist *a,int data)
{
 node *m,*ptr=a->head;
 while(1)
 {
  if(ptr->data==data)
  {
   m=ptr;
   ptr=ptr->ptr;
   if(a->head==m)
   {
    a->head=ptr;
   }
   else if(a->tail==m)
   {
    a->tail=ptr;
   }
   a->lcount--;
  }
  else
  {
   ptr=ptr->ptr;
  }
  if(ptr==NULL)
  {
   break;
  }
 }
 return 1;
}
