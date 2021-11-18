#include "btree.h"

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


struct tree_node * Insert (int x, struct tree_node *t)
{
  // Insert item x into the tree t
  *t = *t + x;

  return NULL;
}

struct tree_node * Remove (int x, struct tree_node *t)
{
 // Remove one item from the tree t

  if (x == NULL)
  return NULL;
  else (x = x - x);

}


int Contains (int x, struct tree_node *t)
{

  // Return true if the tree t contains item x. Return false otherwise.
if (x != NULL) {
  return true;
}
else


  return NULL;

}


struct tree_node * Initialize (struct tree_node *t)
{
  // Create an empty tree
  return NULL;
}

int Empty (struct tree_node *t)
{
  // Test if empty
  return 0;
}

int Full (struct tree_node *t)
{
    // Test if full
    return 0;
}
