#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "pract.h"

int main()
{
    llist *my_list;
    node *mnode;


    my_list=initialize();
    assert(my_list->head==NULL);
    assert(my_list->tail==NULL);
    assert(my_list->lcount==0);
    mnode=getnode(5);
    assert(mnode->data==5);
    assert(mnode->ptr==NULL);

    assert(insert_beg(my_list,6)==1);
    assert(my_list->lcount==1);
    assert(my_list->head->data==6);
    assert(insert_beg(my_list,8)==1);
    assert(my_list->lcount==2);
    assert(my_list->head->data==8);
    assert(insert_end(my_list,10)==1);
    assert(my_list->lcount==3);
    assert(insert_end(my_list,14)==1);
    assert(my_list->lcount==4);
    assert(insert_end(my_list,6)==1);
    assert(my_list->lcount==5);
    assert(delete_node(my_list,6)==1);
    assert(my_list->lcount==3);

    return 0;
}
