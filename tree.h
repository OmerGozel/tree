#ifndef Tree_H
#define Tree_H
# include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Node
{
 private:
 
 string data;

 Node* firstChild = NULL;
 Node* nextSibling = NULL;

 
 friend class Tree;
 public:
 

};

class Tree
{
 public:
 Tree (void);//constructor
 //destructor?
 bool IsEmpty();
 
 Node* InsertNode (string parentStr, string childStr);
 void DisplayTree ();
 Node* Find (string str);
  
 private:
 Node* head;
 void visit (Node* node , string bosluk);
 void preorder(Node* tree, int depth);
 void preorder2(Node* tree,string str);
};

#endif
