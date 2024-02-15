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
node *getnode(int data);
int insert_beg(llist *,int data);
int insert_end(llist *,int data);
int delete_node(llist *,int data);

