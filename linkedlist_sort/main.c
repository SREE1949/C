#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list2.h"

int main()
{
    llist *l;
    node *n;

    l=initialize();
    n=get_node(5);
    //display(l);
    assert(insert_beg(l,10)==1);
    assert(insert_beg(l,8)==1);
    assert(insert_beg(l,3)==1);
    assert(insert_beg(l,7)==1);
    assert(insert_beg(l,1)==1);
    assert(insert_beg(l,9)==1);
    assert(insert_beg(l,5)==1);
    assert(l->head->data==5);
    display(l);
    assert(insert_any(4,5,l));
    display(l);
    assert(insert_any(12,1,l));
    display(l);
    assert(sort_list(l)==1);
    display(l);



    return 0;
}
