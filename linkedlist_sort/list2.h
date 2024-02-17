//code to create linked list which have function to sort,add nod at nth possition

struct _node_
{
 int data;
 struct _node_ *ptr;
};
typedef struct _node_ node;

struct _list_
{
 node *head,*tail;
 int lcount;
};
typedef struct _list_ llist;

llist *initialize();
node *get_node(int data);
int insert_beg(llist *,int data);
int insert_any(int data,int n,llist *);
void display(llist *);
int sort_list(llist *);

