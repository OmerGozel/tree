#include "tree.h"

using namespace std;

//Preorder Traverse
//
//void preorder2(Node* node);

Node* strAdd;

Node* Tree::Find (string str)
{
   preorder2(head, str);
  
  
  return strAdd;
}

void Tree:: preorder2(Node* node,string str)

{
  if (node ->data == str)
   strAdd = node;
  
  Node* child = node ->firstChild;
  Node* sibling = node -> nextSibling;  
  

  if(sibling)  
   preorder2 (sibling,str);
  
  if(child)  
  preorder2(child, str);

}

