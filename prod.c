#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include "prod.h"

Slist slist_new()
{
    Slist s ={NULL,NULL,0};
    return s;
}

static Node* slist_new_node(int32_t p_id,char name,int price,int quantity)
{
    Node *new_node=(Node *)malloc(sizeof(Node));                 //cresting new node
    new_node->p_id=p_id;
    strcpy(new_node->name,name);
    new_node->price=price;
    new_node->quantity=quantity;
    new_node->next=NULL;
    return new_node;
}

Slist* slist_add_product(Slist *product,int32_t p_id,char name,int price,int quantity)
{
    assert(product!=NULL);
    Node *new_node = slist_new_node(p_id,name,price,quantity);           //adding new head node to list
    new_node->next=product->head;
    product->head=new_node;
    if(product->tail==NULL)
    {
        product->tail=new_node;
    }

    ++product->length;

assert((product->length==1 && product->head ==product->tail)||(product->length>0 && product->head!=product->tail));

return product;
}

void display(Slist *list)
{
    assert(list!=NULL);
    if(list->length>0)
    {
        Node *cur=list->head;

        while(cur!=NULL)
        {
            printf("%d ",cur->p_id);
            printf("%s ",cur->name)
            cur=cur->next;

        }
    }
}


