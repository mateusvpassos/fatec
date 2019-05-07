#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
typedef struct node Node;
Node* lst_create (void); //OK
Node* lst_free (Node* l); // OK
Node* lst_insert_at_begin (Node* l, int i); //OK
Node* lst_insert_at_end (Node* l, int i); //OK
Node* lst_insert_ordered (Node* l, int i);
Node* lst_remove (Node* l, int v); //OK
int lst_is_empty (Node* l); //OK
Node* lst_find (Node* l, int v); //OK
void lst_print_all (Node* l); //OK
Node* lst_insertion_sort (Node* unordered);
#endif // NODE_H_INCLUDED
