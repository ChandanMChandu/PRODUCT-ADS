#ifndef _INCLUDED_SLIST_
#define _INCLUDED_SLIST_
#include<stdint.h>

typedef struct _node_ Node;
typedef struct _slist_ Slist;

struct _node_{
    int32_t p_id;
    char name[10];
    int32_t price;
    int32_t quantity;
    Node* next;                         // Structure Node
};

struct _slist_{
    Node* head;
    Node* tail;                         //head,tail and length data
    uint32_t length;
};

Slist slist_new();
Slist* slist_add_product(Slist *product,int32_t p_id,char name,int price,int quantity);
void display(Slist *list);

#endif
