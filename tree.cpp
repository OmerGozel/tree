#include <stdlib.h>
#include <iostream>
#include "tree.h"

using namespace std;

 Tree::Tree (void) //constructor
{
    head = NULL;
}
void Tree:: postOrder(Node* node)

{
  
  Node* child = node ->firstChild;
  Node* sibling = node -> nextSibling;  
  

  if(sibling)  
   postOrder (sibling);
  
  if(child)  
  postOrder (child);

  delete node;
}

 Tree::~Tree (void)
{
  postOrder(head);  
}

 bool Tree::IsEmpty()
{
      return head == NULL;
}

