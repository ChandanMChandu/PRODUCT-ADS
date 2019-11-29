#include <assert.h>
#include<stdio.h>
#include<stdbool.h>
#include "prod.h"

void test_product()
{
    Slist s = slist_new();
	Slist *product = &s; 

	Slist s = slist_new();
	Slist *cart = &s; 

	product=slist_add_product(product,1120,samsung,123456,6);
	product=slist_add_product(product,1340,nokia,122256,5);                              //test case for empty list
	display(product)
}




int main()
{
	test_product();

	return 0;
}

