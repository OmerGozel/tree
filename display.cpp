#include "tree.h"

using namespace std;

//Preorder Traverse
//
void preorder(Node* node);

void Tree::DisplayTree ()
{
  preorder(head, 0);
}

 int old_depth = 0;

void Tree:: visit (Node* node, string bosluk)
{
	cout << bosluk << node -> data << endl;

}

void Tree:: preorder(Node* node, int depth)
{
  static string bosluk = " ";

  visit (node, bosluk);
  
  Node* child = node ->firstChild;
  Node* sibling = node -> nextSibling;  
  
 if(child)  
  {
   string temp = bosluk;
   bosluk += "       ";   
   preorder(child, depth);
  
   bosluk = temp;   
  } 
 if(sibling)  
   {
     preorder (sibling, depth);
   }
  
}

