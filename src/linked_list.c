#include "linked_list.h"
/*
 * Linked list
 */

#include <stdio.h>		/* printf */
#include <stdlib.h>		/* malloc, free */
#include <assert.h>		/* assert */

/* functions to create lists */
node *make_node (int v, node * q)
{
  node *p = malloc (sizeof (node));
  p->value = v;

  if (q == &SENTINEL_node)
    p->next = &SENTINEL_node;
  else
    p->next = q;
  return p;
}

/* free all nodes in the list p */
void free_list (node * p)
{
  node *q = p;
  while (q != &SENTINEL_node)
    {
      node *t = q->next;
      free (q);
      q = t;
    }
}


/* print list to console */
void print_list (node * p)
{
    // Add your code for exercise 1
    // There is NO testcode for this

    if (SENTINEL_node == NULL) { // If the list is empty then nothing will be printed
    printf("Null");}
    else {
      printf("%d, value"); // Print the value
      print_list(value->next); // Recurssion

      return sum;
    }
}

int sum_squares (node * p)
{
    // Add your code for excercise 2
    // You can find the tests in tests.cpp

int sum;

node* list =
  make_node(1,
    make_node(2,
      make_node(3,
        make_node(4,
          make_node(5, &SENTINEL)

      )
    )
  )
);

  sum = sum_squares(list); /* sum should equal 55 */

    return -1;
}

node *map (node * p, int (*f) (int))
{
    // Add your code for excercise 3

int (*sf)(int);
sf = square;
int x;
x = sf(2);


    return NULL;
}


int square (int x)
{
  return x * x;
}
