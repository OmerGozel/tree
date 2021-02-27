#include <stdlib.h>
#include <iostream>
#include "tree.h"

using namespace std;

Node* Tree::InsertNode (string parentStr,string childStr)
{

  Node* currNode = head;
   
  Node* newNode = new Node;
  newNode -> data = childStr;

   if (IsEmpty())
  {
    newNode -> nextSibling = NULL;
    newNode -> firstChild = NULL;
    head = newNode;
  }
  
   else
  {
    Node* parentNode = Find (parentStr);    
 
    if(parentNode)
     {
      if(parentNode ->firstChild == NULL)
        parentNode ->firstChild = newNode;
      
     else{
          currNode = parentNode -> firstChild;	     
         
          while(currNode -> nextSibling)
          currNode = currNode ->nextSibling;
        
          currNode->nextSibling = newNode;   
         }
     }
  }

	return newNode;
}
