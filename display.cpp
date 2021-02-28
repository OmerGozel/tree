#include "tree.h"

using namespace std;

//Preorder Traverse
//
void preorder(Node* node);

void Tree::DisplayTree ()
{
  preorder(head);
}

void Tree:: visit (Node* node, string bosluk)
{
	cout << bosluk << node -> data << endl;
}

void Tree:: preorder(Node* node)
{
  static string bosluk = " ";

  visit (node, bosluk);
  
  Node* child = node ->firstChild;
  Node* sibling = node -> nextSibling;  
  
 if(child)  
  {
   string temp = bosluk;
   bosluk += "       ";   
   preorder(child);
  
   bosluk = temp;   
  } 
 if(sibling)  
   {
     preorder (sibling);
   }
  
}

