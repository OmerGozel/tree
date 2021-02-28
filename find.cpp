#include "tree.h"

using namespace std;

//Preorder Traverse

Node* strAdd;

Node* Tree::Find (string str)
{
   preorder(head, str);
  
  
  return strAdd;
}

void Tree:: preorder(Node* node,string str)

{
  if (node ->data == str)
   strAdd = node;
  
  Node* child = node ->firstChild;
  Node* sibling = node -> nextSibling;  
  

  if(sibling)  
   preorder (sibling,str);
  
  if(child)  
  preorder (child, str);

}

