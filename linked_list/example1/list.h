struct _node_
{
    int data;
    struct _node_ *ptr;
};
typedef struct _node_ Node;

struct _linked_list_
{
    Node *head, *tail;
    int count;
};
typedef struct _linked_list_ List;

List *initialize_list();
int insert_data_beg(List *, int data);
int insert_data_end(List *, int data);
int insert_data_after_pos(List *, int data, int pos);
int insert_data_after_value(List *, int data, int value );


List * deallocate_list(List *);
int search_list(List *, int);
int merge_list(List *, List *);
int get_max(List *);
int get_min(List *);
Node * return_node_address(List *my_list, int value);
int search_list_with_count(List *my_list, int value);


int delete_at_beg(List *);
int delete_at_end(List *);
